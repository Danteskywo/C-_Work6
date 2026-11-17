// #include <iostream>
// int main(){
//     int* p = new int(42); //выделяем память в куче под один int
//     std::cout << "value = " << *p << "\n";
//     // Работаем через указатель *
//     *p = 100;
//     std::cout << "value = " << *p << "\n";// 100

//     delete p; // Освобождаем память!
//     p = nullptr; // обнуляем указатель - 
//     // защита от случайного повторного delete
//     return 0;
// }

// #include <iostream>

// void leaky(){
//     int* arr = new int[5];
//     for (int i = 0; i < 5; ++i)
//         arr[i] = i * 10;
//     std::cout << "arr[3] = " << arr[3] << "\n";
//     // Забыли delete[] arr - утечка памяти!
//     // arr (указатель на стеке) умирает,
//     // а массив в куче остается навсегда
//     delete[] arr;
//     arr = nullptr;
// }

// void dangerous() {
//     int* p = new int(7);
//     delete p; // Память освобождена
//     delete p;   //Двойное удаление - undefinerd behavior
// }

// int main(){
//     leaky();
//     // правильный вариант с массивом
//     int n = 5;
//     int* arr = new int[n];
//     for (int i = 0; i < n; ++i) arr[i] = i + 1;

//     int sum = 0;
//     for (int i = 0; i < n; ++i) sum += arr[i];
//     std::cout << "sum = " << sum << "\n";

//     delete[] arr;  // Удаление массива!
//     arr = nullptr;

//     //dangerous(); // Раскомментируй для того что бы
//     // увидеть как упадет
//     return 0;
// }


// #include <iostream>
// #include <memory>

// int main(){
//     // Шаг 1 Создаем 
//     //make_unqique выделяем память под int со значением 42
//     //и сразу отдаёт её под управление unique_ptr.
//     std::unique_ptr<int> p = std::make_unique<int>(42);
//     // Шаг 2 Пользуемся как обычным указателем.
//     // operator* разыменовывает, Operator-> дает доступ к членам.
//     std::cout << "Значение: " << *p << "\n";
//     // Шаг 3 Можно поменять значение.
//     *p = 100;
//     std::cout << "новое назначение: " << *p << '\n';
//     // Шаг 4. delete не пишем
//     // Когда p выйдет из области видимости (конец main),
//     // его деструктор сам вызовет delete для int
//     return 0;
// }

#include <iostream>
#include <memory>

int main(){
    // Шаг 1. Создаем хозяйна для ште со значением7.
    std::unique_ptr<int> owner = std::make_unique<int>(7);
    std::cout << "До блока: *owner = " << *owner << "\n";
    // Шаг 2. Открываем блок {} - новая область видимости. 
    {
        //Шаг 2а. Передаем Владение в новую переменную!
        //std::move обязателен: unique_ptr нельзя копировать!
        std::unique_ptr<int> guest = std::move(owner);
        *guest = 99;
        std::cout << "В облаке: *guest = " << *guest << "\n";
        // Шаг 2б. Проверяем, что old owner теперь пуст!
        if (owner) {
            std::cout << "owner pust - владение ушло к guest\n";
        }
        //Шаг 2в. guest выйдет из блока -> сработает delete для int.

    }// Здесь guest уничтожается, int в куче освобождается! 
    //Шаг 3 owner все еще существует, но уже не владеет ничем.
    //Разыменовывать его нельзя - это nullptr.
    if (!owner) {
        std::cout << "Posle bloka: owner vse ewe pust\n";
    }
    return 0;
}