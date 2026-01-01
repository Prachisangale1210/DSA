#include <iostream>
using namespace std;
class BankAccount
{
private:
    int Account_number;
    double balance;

public:
    string user_name;

    BankAccount(string username)
    {
        user_name = username;
    }

    //getter - read data
    int getter(){
        return Account_number;
    }

    //setter - change data
    void setter(double balance){
        this->balance=balance;
    }

};
int main(){
    BankAccount B1("Prachi Sangale");
    B1.getter();
    cout<<B1.user_name<<endl;
    B1.setter(50000);
    cout<<B1.getter()<<endl;
}