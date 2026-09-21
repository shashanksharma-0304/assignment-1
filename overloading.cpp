#include <iostream>
using namespace std;

class Base
{
public:
    void display()
    {
        cout << "Display without argument" << endl;
    }

    void display(int x)
    {
        cout << "Display with integer: " << x << endl;
    }

    virtual void show()
    {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show()" << endl;
    }
};

int main()
{
    Base b;

    b.display();
    b.display(10);

    Derived d;
    d.show();

    return 0;
}