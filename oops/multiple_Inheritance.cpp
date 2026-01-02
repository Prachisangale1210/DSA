#include<iostream>
using namespace std;
class Father {
public:
    void fatherProperty() {
        cout << "Father property\n";
    }
};

class Mother {
public:
    void motherProperty() {
        cout << "Mother property\n";
    }
};

class Child : public Father, public Mother {
public:
    void show() {
        cout << "Child inherits both\n";
    }
};

int main() {
    Child c;
    c.fatherProperty();
    c.motherProperty();
}
