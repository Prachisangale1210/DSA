#include<iostream>
using namespace std;
class LivingBeing{
    public:
    void alive(){
        cout<<"I am alive"<<endl;
    }
};
class Human : public LivingBeing{
    public:
    void eat(){
        cout<<"Can eat"<<endl;
    }
};
class Animal : public Human{
    public:
    void sound(){
        cout<<"Can make sound"<<endl;
    }
};
int main(){
    Animal A;
    A.alive();
    A.eat();
    A.sound();
}