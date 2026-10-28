#include <iostream>
using namespace std;

class channel{

    int subscriber;

    public:
    channel(int s){
        subscriber = s;
    }


    void operator++(){
        subscriber++;
    }

    void display(){
        cout << "The number of subscriber are: " << subscriber << endl;
    }
};

int main(){

    channel sachin(1000);
    ++sachin;
    sachin.display();
    return 0;
}