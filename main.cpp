#include <iostream>
#include <iomanip>

template <typename T>
T sumPair(T a, T b) {
    return a + b;
}

int main() {
    int a, b;
    double x, y;
    std::cin >> a >> b >> x >> y;
    std::cout << sumPair(a, b) << "\n";
    std::cout << std::fixed << std::setprecision(2) << sumPair(x, y) << "\n";
    return 0;
}
