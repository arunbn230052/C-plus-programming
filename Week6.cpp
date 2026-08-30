#include <iostream>

int gcd(int m, int n) {

    if (n == 0) {
        return m;
    } else {
        return gcd(n, m % n);
    }
}

int main() {
    int m, n;

    std::cout << "Enter two integers: ";
    std::cin >> m >> n;
    if (m < 0 || n < 0) {
        std::cout << "Please enter non-negative integers." << std::endl;
        return 1;
    }
    int result = gcd(m, n);
    std::cout << "GCD(" << m << ", " << n << ") = " << result << std::endl;

    return 0;
}

