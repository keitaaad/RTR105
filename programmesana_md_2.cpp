#include <iostream>

int main() {
    int skaitlis;

    //Pajautā lietotājam, lai ievada nautirālu skaitli
    std::cout << "Ievadiet naturālu skaitli: ";
    std::cin >> skaitlis;

    if (skaitlis < 0) {
        std::cerr << "Tu nevari ievadīt negatīvu sakitli. Lūdzu ievadi naturālu skaitli." << std::endl;
        return 1;
    }

        //Izdod bināro kodu
    std::cout << "Binārais kods: ";

    if (skaitlis == 0) {
        std::cout << "0";
    } else {
        for (int i = 7; i >= 0; i--) {
            char bit = (skaitlis >> i) & 1;
            std::cout << static_cast<int>(bit);
        }
    }

   std::cout << std::endl;

    return 0;
}
