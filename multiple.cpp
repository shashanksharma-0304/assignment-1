#include <iostream>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Show function of class A" << endl;
    }
};

class B
{
public:
    void show()
    {
        cout << "Show function of class B" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    
    obj.A::show();
    obj.B::show();

    return 0;
}