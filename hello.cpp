// #include <iostream>
// int main()
// {
//     std::cout<< "C++ English !!\n";
//     return 0;
// }

// #include <iostream>
// #include <string>

// int main()
// {
//     std::string robotName;

//     std::cout <<"Robot name:";
//     std::getline(std::cin, robotName);
//     std::cout << "Connected: " << robotName << '\n';

//     int attempts{3};
//     double temperature{24.5};
//     bool ready{true};
//     char command{'A'};
//     std::string name{"Rover"};
//     double battery{87.5};
//     double average{5.0 / 2.0};


//     std::cout << "Status:"
//             <<"Attempts:" <<attempts
//             <<", Temp:" << temperature
//             <<", Ready:" <<ready
//             <<", Command: " <<command
//             <<", Name: " << name
//             <<", Battery " << battery << "%\n"
//             <<", Average " << average << '\n';

//     return 0;
// }

// #include <iostream>
// #include <string>
// Функция - это именновоный блок кода, который принимает данные и может вернуть результат
// Сигнатура - это имя функции и типы ее параметров!
// int calculateReserve(int battery, int consumption) 
// {
//     return battery - consumption;
// }
// Объявлении функции - это сообщение компилятору о существовании функции с такой сигнатурой!
// Определение функции - это ее реализация с выполнением телом.
// int main()
// {
//     const int minimumReserve{20};

//     std::string deviceName;
//     int battery{0};
//     int consuption{0};

//     std::cout << "Device name:";
//     std::getline(std::cin, deviceName);

//     std::cout << "Battery (0-100):";
//     std::cin >> battery;

//     std::cout << "Planned consuptions";
//     std::cin >> consuption;

//     const int reserve{
//         calculateReserve(battery, consuption)
//     };
//     std::cout << "Device:" << deviceName << '\n';
//     std::cout << "Reserve after task:" << reserve << "%\n";

//     if (reserve >= minimumReserve)
//     {
//         std::cout << "Status redy\n";
//     }
//     else
//     {
//         std::cout << "Status: charge required\n";
//     }
//     return 0;
// }


// #include <iostream>
// int main()
// {
//     int mode{2};
//     switch (mode)
//     {
//     case 1:
//         std::cout << "Manual\n";
//         break;
//     case 2:
//         std::cout << "Automatic\n";
//         break;
//     default:
//         std::cout << "Unknown\n";
//         break;
//     }
//     return 0;
// }

// #include <iostream>
// int main()
// {
//     for (int step{0}; step < 3; ++step)
//     {
//         std::cout << "Chek" << step << '\n';
//     }
// }

#include <iostream>
#include <string>

// void chargeByCopy(int battery)
// {
//     battery += 10;
//     std::cout << "Copy inside function: " << battery << "%\n";
// }
// void chargeByReference(int& battery)
// {
//     battery += 10;
//     std::cout << "Reference inside function:" << battery << "%\n";
// }
// int main()
// {
//     int rover{70};
//     int scout{40};
//     chargeByCopy(rover);
//     chargeByReference(scout);

//     std::cout << "Rover after copy charge:" << rover << "%\n";
//     std::cout << "Scout after reference charge:" << scout << "%\n";
//     return 0;
// }
/////////////////////////////////////////
// #include <iostream>
// #include <string>
// int score {100};

// int main()
// {
// if (score == 100)
// {
//     std::cout << "Maximum score\n";
// }
// return 0;
// }
//////////////////////////////////

// #include <iostream>
// #include <string>
// // #include <integer>


// int main()
// {
//     std::cout << "Vvedite znachenie ot 1 do 3x:";
//     int mode;
//     std::cin >> mode;
// switch (mode)
// {
//     case 1:
//         std::cout << "Manual\n";
//         break;
//     case 2:
//         std::cout << "Automatic\n";
//         break;
//     default:
//         std::cout << "Unknown\n";
//         break;
// }
// return 0;
// }
///////////////////////

// #include <iostream>
// int main()
// {
// for (int step{0}; step < 3; ++step)
// {
//     std::cout << "Check" << step << '\n';
// }
// return 0;
// }

