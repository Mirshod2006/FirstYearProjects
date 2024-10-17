#include <iostream>
#include <vector>
#include <string>
#include <ctype.h>
#include <unordered_map>

using namespace std;
/*class Product{
  public:
  unordered_map<string,int> product{{"HP",6},{"Mac",5},{"Lenovo",10},{"Acer",11}};
   unordered_map<string,int> sold{{"HP",0},{"Mac",0},{"Lenovo",0},{"Acer",0}};
  long int count;
  long int price;
  long int discount;
  string name;
  void buyProduct(){
  while(true){
  
   cout <<"Available Products!\n";
   long int i = 1;
   for(const auto& pair: product){
       cout <<i<<")"<< pair.first<<" "<<pair.second << endl;
       i++;
   }
   cout <<"Enter the name of the product\n that you want to buy OR  write  exit TO EXIT: ";
   cin >>name;
   if(name == "exit"){
      break;
   }
   else{
   bool check = true;
     for(const auto& pair: product){
         if(pair.first == name)
         check = check & false;
   }
   if(check){
    cout << "###############################################\n";
     cout << "This item is not available!\n";
     cout  << "Please, Select Followings\n"; 
     cout << "###############################################\n";
   }
   else{
   product[name] = product[name] - 1;
   sold[name]  = sold[name] + 1;
   int j = 1;
   cout << "Sold Products!\n";
     for(const auto& pair: sold){
       cout <<j<<")"<< pair.first<<" "<<pair.second << endl;
       j++;
   }
   if(product[name] == 0){
       product.erase(name);
       }}} 
  }
}
  string toString()const{
     return "a";
  }
};
int main(){
    Product item;
    item.buyProduct();
    return 0;
}*/
class Animal{
    private:
    int animalAge;
    double animalWeigth;
    string animalName;
    bool isPet;
    public:
    void setAnimalAge(int age){this->animalAge=age;} void setAnimalWeight(double weight){this->animalWeigth=weight;}
    void setAnimalName(string name){this->animalName=name;} void setIsPet(bool ispet){ this->isPet=ispet;}
    int getAnimalAge(){return this->animalAge;} double getAnimalWeight(){return this->animalWeigth;}
    string getAnimalName(){ return this->animalName;} bool getIsPet(){return this->isPet;}
    virtual void eat(){cout<<"Eating...";}virtual void sleep(){cout<<"Sleeping...";}
    virtual void makeSound(){cout<<"No sound!";}
    // Animal1(int age = 4,double weight = 18.63,string name = "Ram Rocky",bool ispet = true): animalAge(age),animalWeigth(weight),
    // animalName(name),isPet(ispet){
    //   cout <<"Animal have age: "<<animalAge<<endl;
    //   cout <<"Animal have weigth: "<<animalWeigth<<endl;
    //   cout <<"Animal have name: "<<animalName<<endl;
    //   cout <<"Is animal pet or not?: "<<((isPet)?"Yes":"No")<<endl;
    // }
    Animal(int age,double weight,string name,bool ispet){
      this->animalAge=age;this->animalName=name;this->animalWeigth=weight;this->isPet=ispet;
      cout <<"Animal have age: "<<animalAge<<endl;
      cout <<"Animal have weigth: "<<animalWeigth<<endl;
      cout <<"Animal have name: "<<animalName<<endl;
      cout <<"Is animal pet or not?: "<<((isPet)?"Yes":"No")<<endl;
    }
};
int main(){
   Animal dog1(5,10.3,"DeadPoll",true);
  return 0;
}