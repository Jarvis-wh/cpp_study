#include <iostream>

int square(int n) {
    // Return n * n.
    return n * n;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << square(n) << "\n";
    return 0;
}
