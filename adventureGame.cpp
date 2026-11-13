#include <iostream>
#include <string>
#include <thread>
#include <chrono>

int main() {

    std::string name = "name";
    int choice;
    std::string enter = "enter";

    std::cout << "Welcome to THE FIGHT FOR AVALON!\n\n";
    
    std::cout << "[Enter anything to continue] ";
    std::cin >> enter;
    
    std::cout << "What's your name, o faire knight?\n";

    std::cin >> name;

    std::cout << "\nHello, " << name << "!\n";

    std::cout << "\nYou have a very important quest ahead of you!\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "\n\nDo you know what the nature of this quest is?";

    std::cout << "\n1. I do!\n2. Not really\n3. Get lucky\n4. What is this, some stanley parable crap?\n5. Let's venture forth!\n6. What's the adventure about?\n";

    std::cin >> choice;

    std::cout << "\n\n";

    switch(choice) {
        case 1 :
          std::cout << "Good, for it is VERY important!";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          std::cout << "\nWell, I won't hold you any longer. Let's go on!\n";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          break;
        case 2 :
          std::cout << "And why not!? Don't you CARE about your town!?";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          std::cout << "\nYou're much too selfish! Come now, " << name << ", you have WORK to do!\n";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          break;
        case 3 :
          std::cout << "https://youtu.be/CCHdMIEGaaM?si=gcMecBWZzO_QXHfw\n";
          std::cout << "Get lucky ;D\n";//D
          std::this_thread::sleep_for(std::chrono::seconds(1));
          break;
        case 4 :
          std::cout << "Stanley's parable? What's that now?";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          std::cout << "\nAnyways, you've got an ADVENTURE to go on!! Mosey along now!\n";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          break;
        case 5 :
          std::cout << "Spoken like a true knight! Huzzah!";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          std::cout << "\nAnd yes, indeed you must! Your adventure begins NOW!\n";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          break;
        case 6 :
          std::cout << "You've been instructed by the faire king Avalon himself to slay the evil dragon Gommorah!\n";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          std::cout << "But first, you'll have to go through the horrid dragon's evil forces.\n";
          std::this_thread::sleep_for(std::chrono::seconds(1));
          break;
    }

}