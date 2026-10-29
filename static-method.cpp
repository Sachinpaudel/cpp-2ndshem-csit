//majorly static method is uded in c++ for the purpose of counting the number of objects created for a class.
 //It is also used to access static variables of a class. Static methods can be called without creating an object of the class.

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