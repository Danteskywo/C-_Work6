// #include <iostream>

// int main()
// {
//     int rover{80};
//     int* sensor{&rover};
//     std::cout << "Sensor stores: " << sensor << '\n';
//     std::cout << "Reading through sensor: " << *sensor << "%\n";
//     return 0;
// }


// #include <iostream>

// int main()
// {
//     int rover{80};
//     int* sensor{&rover}; // 1. Модификатор указателя:
//      //создаем sensor и даем ему адрес rover
//     *sensor = 90;        // 2. Оператор разыменования:
//      //идем по адресу и меняем 80 на 90
//     std::cout << "Rover after write: " << rover << "%\n"; // Выведет: 90%
//     return 0;
// }

// #include <iostream>

// int main()
// {
//     int rover = 80;
//     int* sensor{&rover}; // 1. Модификатор указателя:
//      //создаем sensor и даем ему адрес rover
//     *sensor = 90;        // 2. Оператор разыменования:
//      //идем по адресу и меняем 80 на 90
//     int scout{45};
//     sensor = &scout;
//     std::cout << "Rover after write: " << rover << "%\n"; // Выведет: 90%
//     std::cout << "Now reading: " << *sensor << "%\n";
//     return 0;
// }


// #include <iostream>
// int main()
// {
//     int rover{80};
//     int scout{45};
//     int* sensor{&rover};
//     // int* sensor{nullptr};
//     std::cout << "Rover adress: " << &rover << '\n';
//     std::cout << "Sensor stores: " << sensor << '\n';
//     std::cout << "Reading through sensor: " << *sensor << "%\n";
    
//     *sensor = 90;
//     std::cout << "Rover after write: " << rover << "%\n";
    
//     sensor = &scout;
//     std::cout << "Now reading: " << *sensor << "%\n";

//     sensor = nullptr;
//     if (sensor != nullptr) 
//         {
// 		std::cout << "Online: " << *sensor << "%\n";
// 	}
// 	else
// 	{
// 		std::cout << "Sensor offline\n";
// 	}

// 	return 0;
// }

// #include <iostream>
// void printThroughSensor(const int* sensor)
// {
// 	if (sensor == nullptr)
// 	{
// 		std::cout << "Sensor offline\n";
// 		return;
// 	}

// 	std::cout << "Telemetry: " << *sensor << "%\n";
// }
// int main()
// {
//     int rover{80};

//     printThroughSensor(&rover);  // Выведет: Telemetry: 80%
//     printThroughSensor(nullptr); // Выведет: Sensor offline

//     return 0;
// }