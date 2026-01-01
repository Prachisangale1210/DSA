#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    string name;
    string color;
    int engine_capacity;
    string company;

    void start(){
        cout<<"Car Starts";
    }

    void stop(){
        cout<<"Car Stops";
    }

    void accelerate(){
        cout<<"Car Running";
    }

};
int main(){
    Car C1;
    C1.name = "Range Rover";
    cout<<C1.name<<endl;
    C1.color = "Grey";
    cout<<C1.color<<endl;
    C1.engine_capacity = 100;
    cout<<C1.engine_capacity<<endl;
    C1.company = "Land Rover";
    cout<<C1.company<<endl;
    C1.start();
    C1.accelerate();
    C1.stop();
}