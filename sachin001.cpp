// #include <iostream>
// using namespace std;

// int main(){

//     cout << "HEllo world!" << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

class Employee
{
public:
    int eID;
    string eName;
 
    void printName()
    {
        cout << eName << endl;
        cout << "My name is " << eName << " and my ID is " << eID << endl;
    }
};

int main(){
    Employee sachin;
    sachin.eName = "Sachin";
    sachin.eID = 1;
    sachin.printName();

    return 0;
}