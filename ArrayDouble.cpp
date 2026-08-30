#include <iostream>
#include <limits>

double min(double array[], int size) {
    if (size <= 0) {
        std::cerr << "Array size must be greater than 0." << std::endl;
        return std::numeric_limits<double>::quiet_NaN(); 
    }

    double smallest = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }
    return smallest;
}

int main() {
    const int size = 10;
    double numbers[size];

    std::cout << "Enter " << size << " numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Number " << (i + 1) << ": ";
        std::cin >> numbers[i]; 
    }

    double smallest = min(numbers, size);

    std::cout << "The smallest number entered is: " << smallest << std::endl;

    return 0;
}

