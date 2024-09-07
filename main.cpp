#include <sstream>
#include <iostream>
#include <iomanip>
#include <cmath>

int main(void) {
    double number;
    int figureCount;
    
    std::cout << "Enter a number to round: ";
    std::cin >> number;

    std::cout << "Enter a number of significant figures: ";
    std::cin >> figureCount;

    double a = std::pow(10.0, std::floor(std::log10(number)) - figureCount + 1);

    std::stringstream ss;
    ss << std::fixed << std::setprecision(std::floor(figureCount - std::log10(number))) << std::round(number / a) * a;
    
    std::cout << ss.str() << std::endl;
}

