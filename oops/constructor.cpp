#include<iostream>
using namespace std;
class Animal{
    public:
    string name;
    int legs;
    int age;
    string type;

    //Non-parameterized constructor
    Animal(){
        name = "Tiger";
        legs = 4;
        age = 12;
        type = "Wild";
    };


    //parameterized constructor
    Animal(string n , int leg , int a , string t){
        name=n;
        legs=leg;
        age=a;
        type=t;
    }


    //Copy Constructor
    Animal(Animal &obj){
        this->name = obj.name;
        this->age = obj.age;
        this->legs = obj.legs;
        this->type = obj.type;
    }

    void eat(){
        cout << name << " is eating" << endl;
    }

    void sleep(){
        cout << name << " is sleeping" << endl;
    }

    void sound(){
        cout << name << " is making sound" << endl;
    }
};
int main(){
    Animal A1("Cat",4,2,"Domestic");
    Animal A2("Deer",4,10,"Wild");
    Animal A4;
    cout<<A1.type<<endl;
    cout<<A2.name<<endl;
    A1.eat();
    A2.sleep();
    Animal A3(A1);
    cout<<A3.name<<endl;
    cout<<A4.legs<<endl;
}