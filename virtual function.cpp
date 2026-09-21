#include <iostream>
using namespace std;

class Base
{
public:
    virtual void show()
    {
        cout << "Base class show()" << endl;
    }

    virtual ~Base()
    {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base
{
public:
    void show() override
    {
        cout << "Derived class show()" << endl;
    }

    ~Derived()
    {
        cout << "Derived class destructor" << endl;
    }
};

int main()
{
    Base *ptr = new Derived();

    ptr->show();

    delete ptr;

    return 0;
}