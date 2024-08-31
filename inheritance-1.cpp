#include <iostream>
#include <cmath>
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() {
        return height * width;
    }
    double perimeter() {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() {
        return 0.5 * height * width;
    }
    double perimeter() {
        double side = height;
        double base = width;
        double hypotenuse = std::sqrt((base / 2) * (base / 2) + side * side);
        return base + 2 * hypotenuse;
    }
};
int main() {
    Rectangle rectangle(10, 20);
    std::cout << "Rectangle Area: " << rectangle.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.perimeter() << std::endl;
    Triangle triangle(10, 20);
    std::cout << "Triangle Area: " << triangle.area() << std::endl;
    std::cout << "Triangle Perimeter: " << triangle.perimeter() << std::endl;
    return 0;
}

