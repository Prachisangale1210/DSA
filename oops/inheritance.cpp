#include<iostream>
using namespace std;
class Animal{
    protected:
    void walk(){
        cout<<"Animal can walk"<<endl;
    }
    public:
    void sound(){
        cout<<"Animal can talk using their different sounds"<<endl;;
    }
};

class dog: protected Animal{
    public:
    void eat(){
        cout<<"dog eats"<<endl;
    }
    void show(){
        walk();
        sound();
    }
};

int main(){
    dog d ;
    d.eat();
    d.show();
}