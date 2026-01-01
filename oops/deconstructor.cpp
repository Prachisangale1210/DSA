#include<iostream>
#include<string>
using namespace std;
class AmazonProduct{
    public:
    string product_name;
    int product_price;
    string product_description;
    float discount;

    AmazonProduct(string proName , int proPrice , string proDescription , float proDiscount){
        product_name = proName;
        product_price = proPrice;
        product_description = proDescription;
        discount = proDiscount;
    }

    void showDetails(){
        cout<<"Name of the Product: "<<product_name<<endl;
        cout<<"Price of the Product: "<<product_price<<endl;
        cout<<"Description of the Product: "<<product_description<<endl;
        cout<<"Discount on the Product: "<<discount<<endl;
    }

    float applyDiscount(){
        return product_price - (product_price * (discount / 100));
    }

    void updatePrice(int price){
        this->product_name = price;
    }

    void updateDiscount(float newDiscount){
        discount = newDiscount;
    }

    void updateDescription(string newDescription){
        product_description = newDescription;
    }

    ~AmazonProduct(){
        cout<<"Deconstructor Called"<<endl;
    }
};
int main(){
    AmazonProduct phone("Iphone",100000,"This is the Apple Model",20.00);
    phone.showDetails();
    cout<<"The price of the phone after apply discount: "<<phone.applyDiscount()<<endl;
}