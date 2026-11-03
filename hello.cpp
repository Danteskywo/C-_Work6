// #include <iostream>
// int main()
// {
//     std::cout<< "C++ English !!\n";
//     return 0;
// }

#include <iostream>
#include <string>

int main()
{
    std::string robotName;

    std::cout <<"Robot name:";
    std::getline(std::cin, robotName);
    std::cout << "Connected: " << robotName << '\n';

    int attempts{3};
    double temperature{24.5};
    bool ready{true};
    char command{'A'};
    std::string name{"Rover"};
    double battery{87.5};
    double average{5.0 / 2.0};


    std::cout << "Status:"
            <<"Attempts:" <<attempts
            <<", Temp:" << temperature
            <<", Ready:" <<ready
            <<", Command: " <<command
            <<", Name: " << name
            <<", Battery " << battery << "%\n"
            <<", Average " << average << '\n';

    return 0;
}