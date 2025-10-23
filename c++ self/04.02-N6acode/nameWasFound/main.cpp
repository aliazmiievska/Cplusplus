#include <iostream>
#include <string>

int main()
{
    std::string arr[] = { "Sasha", "Ivan", "John", "Orlando", "Leonardo", "Nina", "Anton", "Molly" };

    std::cout << "Enter a name: ";
    std::string name;
    std::getline(std::cin, name);
    bool wasFound = false;

    for (auto nameNew : arr) {
        if (name == nameNew) {
            std::cout << name << " was found.\n";
            wasFound = true;
            break;
        }
    }


    if (!wasFound) std::cout << name << " wasn't found.\n";

    system("pause");
    return 0;
}