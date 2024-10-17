#include <iostream>
#include <string>
using namespace std;

class Account{
    private:
    string accountName;
    int accountNumber;
    string accountType;
    double accountBalance;
    public:
    Account(string name,int  num,string type,double balance){
        this->accountName = name;
        this->accountNumber = num;
        this->accountBalance = balance;
        this->accountType = type;
    }
    string  getAccountName(){return accountName;}
    void setAccountName(string name){this->accountName = name;}
    double  getAccountBalance(){return accountBalance;}
    void setAccountBalance(double balance){this->accountBalance = balance;}
    int  getAccountNumber(){return accountNumber;}
    void setAccountName(int number){this->accountNumber = number;}
    string  getAccountType(){return accountType;}
    void setAccountType(string type){this->accountType = type;}
    void displayAccount(int data){
        if(data == this->accountNumber) {
             cout << "Account Name : "<< this->accountName << endl;
             cout << "Account Number : " <<this->accountNumber << endl;
             cout << "Account Type : " <<this->accountType << endl;
             cout << "Current Balance : " <<this->accountBalance <<endl;
        }else{
            cout <<  "No such account exists!" << endl;
        }
    }
    friend ostream& operator<<(ostream &, const Account &);
    friend istream& operator>>(istream  &, Account &);
    friend Account operator*(Account acc);
    void operator>>(istream &in,const Account &acc){
        cout << "Enter the new account details" << endl;
        cout <<"Enter the account name : ";
        in >> acc.accountName ;
        cout << "Enter the account number : ";
        in >> acc.accountNumber ;
        cout << "Enter the account type (Savings/ Current ) : ";
        in >> acc.accountType ;
        cout << "Enter the account balance : ";
        in >> acc.accountBalance ;
    }
    void  operator<<(ostream &out,const Account &acc){
        out << acc.getAccountName() << "\n"
     << acc.getAccountNumber() <<"\n"
     << acc.getAccountType()<<"\n"
     << acc.getAccountBalance()<<"\n";
        }
    Account operator*(Account &a1 ,Account &a2)
    {   Account a3;
        a3.setAccountName("Joint");
        a3.setAccountNumber(-1);
        a3.setAccountType("Joint");
        double bal1 = a1.getAccountBalance();
        double bal2 = a2.getAccountBalance();
        double total = bal1 + bal2;
        a3.setAccountBalance(total);
        return a3;
        }
};
class AccountArray{
    private:
    int size;
    Account* arr;
    public:
    AccountArray(int s){
        this->size = s;
        arr = new Account[size];
    }
    //     // Stream insertion operator
//     friend ostream& operator<<(ostream& out, const AccountArray& accArr) {
//         for (int i = 0; i < accArr.size; i++) {
//             out << i << ": " << accArr.arr[i] << std::endl;
//         }
//         return out;
//     }
};