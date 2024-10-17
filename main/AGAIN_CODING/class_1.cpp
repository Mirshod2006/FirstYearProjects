#include <iostream>
#include <string>
using namespace std;

class First_Class {
    private:
        int self_price;
        int delivery_price;
        int profit;
    public:
        int price;
        int amount;
        string name;
        int get_price(){
            return price;
        }
        void set_price(int a, int b, int c){
            self_price = a;
            delivery_price = b;
            profit = c;
            price = self_price + delivery_price + profit;
        }
        int know_profit(){
            return profit; 
        }
};

int main(){
    First_Class My_Shop;
    My_Shop.name = "Airpods";
    My_Shop.set_price(20, 5, 10);
    cout<<"Price of good: "<<My_Shop.get_price()<<endl;
    cout<<"Our peofit: "<<My_Shop.know_profit()<<endl;
    return 0;
}