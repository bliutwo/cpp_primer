#include <iostream>

int main() {
    int m, n;
    std::cout << "Enter two integers: ";
    std::cin >> m >> n;
    // int origM = m;
    if (m > n) {
        // std::cout << "Invalid range: " << m << " is greater than " << n << "." << std::endl;
        for (int i = m; i >= n; i--) {
            std::cout << i << std::endl;
        }
        return 0;
    }
    // while (m <= n) {
    //     std::cout << m << std::endl;
    //     m++;
    // }
    // m = origM;
    for (int i = m; i <= n; i++) {
        std::cout << i << std::endl;
    }
    return 0;
}
