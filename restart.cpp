#include <iostream>
using namespace std;

class employee {

    public:
        int eId;
        char eName[20];

    int getName();
};

int employee::getName() {
    cout << "Enter employee name:";
    cin >> eName;
    return 0;
}

int main() {
    
   employee e1;
   e1.getName();

}