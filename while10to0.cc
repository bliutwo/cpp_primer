#include <iostream>

int main() {
    int orig = 10;
    int n = orig;
    while (n >= 0) {
        std::cout << n << std::endl;
        n--;
    }
    for (int i = orig; i >= 0; i--) {
        std::cout << i << std::endl;
    }
    return 0;
}
