//hey guys check this out

#include <iostream>

int main() {
    int number;

    std::cout << "Choose a song:\n";
    std::cout << "1. Riot Radio\n";
    std::cout << "2. Last Train to San Fernando\n";
    std::cout << "3. Ça plane pour moi\n";
    std::cout << "4. Life is a Highway\n";
    std::cout << "5. Clap Your Hands\n";
    std::cout << "6. Better Off Dead\n";
    std::cout << "7. Los Angeles is Burning\n";
    std::cout << "8. A Girl Like You\n";
    std::cout << "9. Bamboleo\n\n";

    std::cin >> number;
    std::cout << "\n";

    switch (number) {
        case 1 :
          std::cout << "https://youtu.be/YzMyo9nyqtA?si=ktMNvIl_EijB-B5B";
          break;
        case 2 :
          std::cout << "https://youtu.be/aPnECuww5yM?si=oLGnoAHuV4SVcZty\n";
          break;
        case 3 :
          std::cout << "https://youtu.be/8soQkubMk1g?si=kvBpI_KOtZc6Gtt-";
          break;
        case 4 :
          std::cout << "https://youtu.be/5tXh_MfrMe0?si=3Ek3bEZcfdIrjABh";
          break;
        case 5 :
          std::cout << "https://youtu.be/bH_jxhnPf2c?si=KqsW8G0P46ckGaRq";
          break;
        case 6 :
          std::cout << "https://youtu.be/5_wB0efpZlA?si=E5KF_rNKXRODv3Lu";
          break;
        case 7 :
          std::cout << "https://youtu.be/pMfKZhhBDMQ?si=Vl5_0Pn2LUW1l8eW";
          break;
        case 8 :
          std::cout << "https://youtu.be/6oqJ0JpMj6I?si=Oxky95UH6_eAdyaH";
          break;
        case 9 :
          std::cout << "https://youtu.be/ZKfHt-AVR48?si=sGi6ktVpfBFMdHjs";
          break;
    }
}