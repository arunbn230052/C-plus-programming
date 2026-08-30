#include <iostream>
#include <cmath> 
double computeFutureValue(double principal, double annualRate, int years, int timesCompoundedPerYear) {
    double rate = annualRate / 100.0;
    double futureValue = principal * std::pow((1 + rate / timesCompoundedPerYear), timesCompoundedPerYear * years);
    return futureValue;
}

int main() {
    double principal, annualRate;
    int years, timesCompoundedPerYear;

    std::cout << "Enter the principal amount: ";
    std::cin >> principal;

    std::cout << "Enter the annual interest rate (in %): ";
    std::cin >> annualRate;

    std::cout << "Enter the number of years: ";
    std::cin >> years;

    std::cout << "Enter the number of times interest is compounded per year: ";
    std::cin >> timesCompoundedPerYear;
    if (principal <= 0 || annualRate <= 0 || years <= 0 || timesCompoundedPerYear <= 0) {
        std::cout << "All input values must be greater than 0." << std::endl;
        return 1;
    }
    double futureValue = computeFutureValue(principal, annualRate, years, timesCompoundedPerYear);
    std::cout << "The future value of the investment is: $" << futureValue << std::endl;

    return 0;
}

