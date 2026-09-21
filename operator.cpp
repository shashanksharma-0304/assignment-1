#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;

public:
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    friend ostream& operator<<(ostream& out, Employee e)
    {
        out << "Employee ID: " << e.id << endl;
        out << "Employee Name: " << e.name << endl;
        out << "Employee Salary: " << e.salary << endl;

        return out;
    }
};

int main()
{
    Employee e(101, "Ramesh", 50000);

    cout << e;

    return 0;
}