#include <iostream>
#include <iomanip>

// class Shape { ... };
class Shape {
public:
    virtual double area() const = 0; // pure virtual function
    virtual ~Shape() {} // virtual destructor
};
// class Square : public Shape { ... };
class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {};
    double area() const override {
        return side * side;
    }
};
// class Circle : public Shape { ... };
class Circle : public Shape {
private:
    double r;
public:
    Circle(double radius) : r(radius) {};
    double area() const override {
        return 3.14159 * r * r;
    }
};

int main() {
    double s, r;
    std::cin >> s >> r;
    std::cout << std::fixed << std::setprecision(2);
    Shape* a = new Square(s);
    Shape* b = new Circle(r);
    std::cout << a->area() << "\n";
    std::cout << b->area() << "\n";
    delete a; delete b;
    return 0;
}
