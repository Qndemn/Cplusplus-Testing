#include <iostream>
#include <string>

int main() {

    std::string name = "name";

    std::cout << "Welcome to your VERY OWN ADVENTURE!\n\n";
    
    std::cout << "What's your name, o adventurer?\n";

    std::cin >> name;

    std::cout << "\nHello, " << name << "!";
}