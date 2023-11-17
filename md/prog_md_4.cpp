#include <iostream>
#include <limits>
#include <type_traits>

template <typename T>
typename std::enable_if<std::is_integral<T>::value, T>::type
calculateFactorial(T n) {
    T result = 1;
    while (n > 1) {

        if (result > std::numeric_limits<T>::max() / n) {
            std::cerr << "Faktoriālu nevar aprēķināt ar izvēlēto datu tipu.";
            return -1; 
        }
        result *= n;
        --n;
    }
    return result;
}

int main() {
    // Iegust info no lietotaja
    double decimalNumber;
    std::string dataType;

    std::cout << "Ievadiet decimālskaitli: ";
    std::cin >> decimalNumber;

    std::cout << "Ievadiet savu izvēlēto datu tipu (char, int, vai long long): ";
    std::cin >> dataType;

    // Izreķina faktorialu
    if (dataType == "char") {
        if (decimalNumber < 0 || decimalNumber != static_cast<char>(decimalNumber)) {
            std::cerr << "Faktoriālu nevar apreķināt: jūs ievadījāt vai nu negatīvu skaitli vai sakitli, kas nav vesels.\n";
        } else {
            std::cout << "Faktoriāls: " << calculateFactorial(static_cast<char>(decimalNumber)) << "\n";
        }
    } else if (dataType == "int") {
        if (decimalNumber < 0 || decimalNumber != static_cast<int>(decimalNumber)) {
            std::cerr << "Faktoriālu nevar apreķināt: jūs ievadījāt vai nu negatīvu skaitli vai sakitli, kas nav vesels>.\n";
        } else {
            std::cout << "Faktoriāls: " << calculateFactorial(static_cast<int>(decimalNumber)) << "\n";
        }
    } else if (dataType == "long long") {
        if (decimalNumber < 0 || decimalNumber != static_cast<long long>(decimalNumber)) {
            std::cerr << "Faktoriālu nevar apreķināt: jūs ievadījāt vai nu negatīvu skaitli vai sakitli, kas nav vesels>.\n";
        } else {
            std::cout << "Faktoriāls: " << calculateFactorial(static_cast<long long>(decimalNumber)) << "\n";
        }
    } else {
        std::cerr << "Jūs ievadījāt nederīgu datu tipu.\n";
    }

    return 0;
}

