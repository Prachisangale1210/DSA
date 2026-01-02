#include<iostream>
using namespace std;
class Human{
    public:
    string name;
    int age;
    float height;

    Human(string name,int age,float height){
        this->name=name;
        this->age=age;
        this->height=height;
    }

    void eat(){
        "Human can Walk";
    }

    void walk(){
        "Human can Walk";
    }

    void speak(){
        "Human can speak";
    }
};

class Child : public Human{
    public:
    // Child constructor calling Parent constructor
    Child(string name, int age, float height) : Human(name, age, height) {}

    void showDetails(){
        cout << "Child Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Height: " << height << endl;
    }
};
int main(){
    Child c("Prachi",21,163);
    c.showDetails();
}