#include <iostream>
#include <deque>
#include <algorithm>
#include <random>
#include <ctime>

int main() {
    std::deque<double> dq = {1.3, 2.4, 4.5, 6.7, 9.0};
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    std::generate(dq.begin(), dq.end(), []() {
        return static_cast<double>(std::rand()) / RAND_MAX * 10;
    });
    std::cout << "Deque after generating random numbers: ";
    for (double num : dq) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::generate_n(dq.begin(), 3, []() {
        return static_cast<double>(std::rand()) / RAND_MAX * 10;
    });
    std::cout << "Deque after generating random numbers for the first three elements: ";
    for (double num : dq) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

