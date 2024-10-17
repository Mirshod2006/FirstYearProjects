// #include <iostream>
// using namespace std;
// class Account {
//     private:
//     int accountNumber;
//     string accountName;
//     double amountBalance;
//     string accountType;

//     public:
//     Account(int number,string name,double balance,string type){
//         this->accountNumber=number;
//         this->accountName = name;
//         this->amountBalance = balance;
//         this->accountType = type;
//     }
//      string getName() const {
//         return accountName;
//     }

//     int getNumber() const {
//         return accountNumber;
//     }

//     double getBalance() const {
//         return amountBalance;
//     }

//     // Setters
//     void setName(string name) {
//         accountName = name;
//     }

//     void setNumber(int number) {
//         accountNumber = number;
//     }

//     void setBalance(double balance) {
//         amountBalance = balance;
//     }
//     string  getType()const{return accountType;}
//     void   setType(string t) {accountType=t;}
//     friend ostream& operator<<(ostream& out,const Account& account){
//      out << "Name : " << account.accountName << "\nNumber : " << account.accountNumber << "\nAmount Balance : "<< account.amountBalance << "\nBalance Type : " << account.accountType;
//        return out;
//     }
//     friend istream& operator>>(istream& inp,const Account& account){
//         cout << "Enter name: ";
//         inp >> account.accountName;
//         cout << "Enter number: ";
//         inp >> account.accountNumber;
//         cout << "Enter balance: ";
//         inp >> account.amountBalance;
//         return inp;
//     }
// };
// template <typename T>
// class AccountArray{
//  private:
//     Account* arr;
//     int size;

// public:
//     // Constructor
//     AccountArray(int s) {
//         size = s;
//         arr = new Account[size];
//     }

//     // Getter for size
//     int getSize() const {
//         return size;
//     }

//     // Getter for element
//     Account& operator[](int index) {
//         if (index < 0 || index >= size) {
//             throw out_of_range("Index out of range");
//         }
//         return arr[index];
//     }

//     // Overloading the = operator
//     AccountArray<T>& operator=(const AccountArray<T>& other) {
//         if (this != &other) {
//             if (size != other.size) {
//                 delete[] arr;
//                 size = other.size;
//                 arr = new Account[size];
//             }
//             for (int i = 0; i < size; i++) {
//                 arr[i] = other.arr[i];
//             }
//         }
//         return *this;
//     }

//     // Stream insertion operator
//     friend ostream& operator<<(ostream& out, const AccountArray& accArr) {
//         for (int i = 0; i < accArr.size; i++) {
//             out << i << ": " << accArr.arr[i] << std::endl;
//         }
//         return out;
//     }

//     // Stream extraction operator
//     friend istream& operator>>(std::istream& in, AccountArray& accArr) {
//         for (int i = 0; i < accArr.size; i++) {
//             in >> accArr.arr[i];
//         }
//         return in;
//     }
//      // Destructor
//     ~AccountArray() {
//         delete[] arr;
//     }
// };