#include "calculator.h"

int main() {
    Calculator calc;
    double a = 5.0;
    double b = 3.0;

    calc.PrintResult(a, b);
    std::cout << "Додавання: " << calc.Add(a, b) << std::endl;
    std::cout << "Віднімання: " << calc.Sub(a, b) << std::endl;

    return 0;
}
