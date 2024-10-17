#ifndef CREDIT_CARD_H
#define CREDIT_CARD_H

#include <iostream>
#include <string>
using namespace std;

class CreditCard{
    public:
    CreditCard(const string& no,const string& nm,int lim,double bal = 0);

    string getNumber() const { return number;}
    string getName() const { return name;}
    double getBalance() const { return balance;}
    int getLimit() const { return limit;}

    bool chargeIt(double price);
    void makePayment(double payment);
    private:
    string number;
    string name;
    int limit;
    double balance;
};

ostream& operator<<(ostream& out, const CreditCard& c);
#endif

// CreditCard::CreditCard(string& no,string& nm,int lim,double bal){
//      number = no;
//      name = nm;
//      balance = bal;
//      limit = lim;
// }
// bool CreditCard::chargeIt(double price){
//     if(price + balance > double(limit))
//     return false;
//     balance += price;
//     return true;
// }
// void CreditCard::makePayment(double payment){
//    balance -= payment;
// }
// ostream& operator<<(ostream& out,const CreditCard c){
//     out << "Number = " << c.getNumber() << '\n'
//     << "Name = " << c.getName() << "\n" 
//     << "Balance = " << c.getBalance() << '\n'
//     << "Limit = " << c.getLimit() << "\n" ;
//     return out;
// }