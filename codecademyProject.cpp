#include <iostream>

int main() {
  
  double weight;

  int planet;

  int choice;
  
  std::cout << "What's your weight, Little Mac? (In pounds)\n";

  std::cin >> weight;
  
  std::cout << "\nYou're " << weight << " pounds?\n";
  std::cout << "\n1. Yes 2. No\n";

  std::cin >> choice;

  switch (choice) {
    case 1 :
      std::cout << "Perfect!\n";
      break;
    case 2 :
      std::cout << "What's your weight, Little Mac? (In pounds)\n";
      std::cin >> weight;
      break;
  }
  
  std::cout <<"\n\nWhich planet would you like to fight on?\n";
  std::cout <<"1. Mercury (Relative Gravity: 0.38)\n";
  std::cout <<"2. Venus (Relative Gravity: 0.91)\n";
  std::cout <<"3. Mars (Relative Gravity: 0.38)\n";
  std::cout <<"4. Jupiter (Relative Gravity: 2.34)\n";
  std::cout <<"5. Saturn (Relative Gravity: 1.06)\n";
  std::cout <<"6. Uranus (Relative Gravity: 0.92)\n";
  std::cout <<"7. Neptune (Relative Gravity: 1.19)\n";

  std::cin >> planet;
  
  switch(planet) {
    case 1 :
      weight = weight * 0.38;
      std::cout << "\nNew weight: " << weight;
      break;
    case 2 :
      weight = weight * 0.91;
      std::cout << "\nNew weight: " << weight;
      break;
    case 3 :
      weight = weight * 0.38;
      std::cout << "\nNew weight: " << weight;
      break;
    case 4 :
      weight = weight * 2.34;
      std::cout << "\nNew weight: " << weight;
      break;
    case 5 :
      weight = weight * 1.06;
      std::cout << "\nNew weight: " << weight;
      break;
    case 6 :
      weight = weight * 0.92;
      std::cout << "\nNew weight: " << weight;
      break;
    case 7 :
      weight = weight * 1.19;
      std::cout << "\nNew weight: " << weight;
      break;
  }
  
  
  
}