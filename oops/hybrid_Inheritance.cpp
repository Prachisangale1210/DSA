#include<iostream>
using namespace std;
class A {
public:
    A(){ cout << "A\n"; }
};

class B : virtual public A { // we use virtual keyword because it creates only one copy of the base class avoids diamond problem
public:
    B(){ cout << "B\n"; }
};

class C : virtual public A {
public:
    C(){ cout << "C\n"; }
};

class D : public B, public C {
public:
    D(){ cout << "D\n"; }
};

int main(){
    D obj;
}
