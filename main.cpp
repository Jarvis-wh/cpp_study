#include <iostream>

void swap(int& a, int& b) {
    // Swap a and b.
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    std::cin >> a >> b;
    swap(a, b);
    std::cout << a << " " << b << "\n";
    return 0;
}
