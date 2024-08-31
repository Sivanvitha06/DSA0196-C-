#include <iostream>
#include <cmath>
using namespace std;
class Shape {
protected:
    double height;
    double width;
public:
    Shape(double h, double w) : height(h), width(w) {}
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~Shape() {}
};
class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return height * width;
    }
    double perimeter() override {
        return 2 * (height + width);
    }
};
class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}
    double area() override {
        return 0.5 * height * width;
    }
    double perimeter() override {
        return 3 * width;
    }
};
int main() {
    Shape* rect = new Rectangle(4, 5);
    Shape* tri = new Triangle(4, 5);
    cout << "Rectangle Area: " << rect->area() << endl;
    cout << "Rectangle Perimeter: " << rect->perimeter() << endl;
    cout << "Triangle Area: " << tri->area() << endl;
    cout << "Triangle Perimeter: " << tri->perimeter() << endl;
    delete rect;
    delete tri;
    return 0;
}

