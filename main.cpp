#include <iostream>

class Rectangle {
    // private members
    int width;
    int height;
public:
    // constructor + area() + perimeter()
    Rectangle(int w, int h) : width{w}, height{h} {};
    int area() const {return width * height;};
    int perimeter() const {return 2 * (width + height);};
};

int main() {
    int w, h;
    std::cin >> w >> h;
    Rectangle r{w, h};
    std::cout << "area: " << r.area() << std::endl;
    std::cout << "perimeter: " << r.perimeter() << std::endl;
    return 0;
}
