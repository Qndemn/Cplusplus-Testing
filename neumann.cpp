#include <iostream>
//completely innacurate
int main() {
  std::cout << "Von-Neumann Drone Reproduction Formula for Given Yearly Time\n\n";

  int y;
  int d;

  d = 1;

  std::cout << "Length of time (years):\n";

  std::cin >> y;

  d = ((y/2.5)*((y*(d*2))*((0.35*y)*d)));  
//no obviously this isn't meant to be accurate go to python if you want that crap
  std::cout << "\n\nDrones: " << d << "\n";

}