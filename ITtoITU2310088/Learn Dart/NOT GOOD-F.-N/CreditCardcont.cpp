// #include "CREDIT_CARD.h"
// using namespace std;

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