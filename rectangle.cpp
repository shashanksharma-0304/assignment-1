// Program 1: Class Rectangle - area and perimeter using a constructor
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, breadth;

public:
    // Constructor
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    double getArea() {
        return length * breadth;
    }

    double getPerimeter() {
        return 2 * (length + breadth);
    }
};

int main() {
    double l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;

    Rectangle rect(l, b);

    cout << "Area = " << rect.getArea() << endl;
    cout << "Perimeter = " << rect.getPerimeter() << endl;

    return 0;
}
