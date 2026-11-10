// #include <iostream>
// #include <string>

// void chargeByCopy(int battery)
// {
//     battery += 10;
//     std::cout << "Copy inside function:" << battery << "%\n";

// }

// void chargeByReference(int& battery)
// {
//     battery += 10;
//     std::cout << "Reference inside function:" << battery << "%\n";
// }
// void printBattery (const std::string& name, const int& battery)
// {
//     std::cout << name << " : " << battery << "%\n";
// }
// void swapBatteries(int& left, int& right)
// {
//     const int saved{left};
//     left = right;
//     right = saved;
// }
// int main()
// {
//     int rover{70};
//     int scout{40};

//     chargeByCopy(rover);
//     chargeByReference(scout);

//     printBattery("Rover", rover);
//     printBattery("Scout", scout);

//     swapBatteries(rover, scout);
//     printBattery("Rover after swap", rover);
//     printBattery("Scout after swap", scout);

//     return 0;
// }


#include <iostream>
#include <string>
int rover{70};
int main()
{
{
    int rover{10};
    std::cout << "Inner rover:" << rover << '\n';
}
    std::cout << "Outher rover:" << rover << '\n';
    return 0;

}