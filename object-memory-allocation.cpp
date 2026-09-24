// --------------------------Base model of object memory allocation in C++
// class Employee
// {
// public:
//     static int count; // returns number of employees
//     string eName;

//     void setName(string name)
//     {
//         eName = name;
//         count++;
//     }
// };

//     int Employee::count = 0; // defining the value of count



#include <iostream>
using namespace std;

class Employee
{
public:
    static int count; // static variable
    string eName;

    void setName(string name)
    {
        eName = name;
        count++;
    }

    static int getCount() // static method
    {
        return count;
    }
};

int Employee::count = 0; // defining the value of count

int main()
{
    Employee Harry;
    Harry.setName("Harry");
    cout << Employee::getCount() << endl;
}

