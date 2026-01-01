#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    double *cgpaPtr;

    Student(string name , double cgpa){
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
        this->name = name;
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"CGPA : "<<*cgpaPtr<<endl;
    }
};
int main(){
    Student s1("Rahul Kumar",8.9);
    s1.getInfo();
    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    s1.getInfo();
}