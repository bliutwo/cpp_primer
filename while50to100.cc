#include <iostream>

int main() {
    int n = 50;
    int sum = 0;
    while (n <= 100) {
        sum += n;
        n++;
    }
    std::cout << sum << std::endl;
    int total = 0;
    for (int i = 50; i <= 100; i++) {
        total += i;
    }
    std::cout << total << std::endl;
    return 0;
}
