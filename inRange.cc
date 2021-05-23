#include <iostream>

int main() {
    int m, n;
    std::cout << "Enter two integers: ";
    std::cin >> m >> n;
    if (m > n) {
        std::cout << "Invalid range: " << m << " is greater than " << n << "." << std::endl;
        return 0;
    }
    while (m <= n) {
        std::cout << m << std::endl;
        m++;
    }
    return 0;
}
