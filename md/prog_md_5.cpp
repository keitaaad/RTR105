#include <iostream>
#include <limits>

template <typename T>
T calculateFactorial(T number) {
    T result = 1;

    for (T i = 2; i <= number; ++i) {
        if (result > std::numeric_limits<T>::max() / i) {
            std::cerr << "Faktoriālu nevar aprēķināt ar izvēlēto datu tipu." << std::endl;
            exit(EXIT_FAILURE);
        }

        result *= i;
    }

    return result;
}

int main() {
    double decimalNumber;
    std::cout << "Ievadiet decimālskaitli: ";
    std::cin >> decimalNumber;

    std::cout << "Ievadiet savu izvēleto datu tipu (char, int vai long long): ";
    std::string dataType;
    std::cin >> dataType;

    if (dataType == "char") {
        char result = calculateFactorial(static_cast<char>(decimalNumber));
        std::cout << "Faktorilās: " << static_cast<int>(result) << std::endl;
    } else if (dataType == "int") {
        int result = calculateFactorial(static_cast<int>(decimalNumber));
        std::cout << "Fakoriāls: " << result << std::endl;
    } else if (dataType == "long long") {
        long long result = calculateFactorial(static_cast<long long>(decimalNumber));
        std::cout << "Faktorilāls: " << result << std::endl;
    } else {
        std::cerr << "Jūs ievadījāt nederīgu datu tipu." << std::endl;
        return EXIT_FAILURE;
    }

    return 0;
}
