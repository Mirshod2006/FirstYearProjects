/*
SECTION 002
HAMROYEV MIRSHOD 
U2310088
*/




#include <iostream>
#include <string>
#include "Owner.h"
using namespace std;

class Property{
    public:
    string address;
    static int totalProperties;
    //Owner class has been called in Property class
    //Owner* owner;
    int Id;
    string Name;
    double cost;
public:
    int count = 0;
    // creating  a constructor for the class to initialize values of object properties.
    //Also Owner is called as object value 
    Property(string address,string Name,int Id,int cost){
        count ++;
        this->address = address;
        /*owner = new Owner();*/
        this->Name = Name;
        this->Id = Id;
        totalProperties = count;
        this->cost = cost;
    }

      friend  Property operator+ (Property &first,Property &second){
            static int nextId = second.Id +1 ;
            return Property(first.Name,first.address,nextId,second.cost + first.cost);
        }

       
      friend  Property operator- (Property &first,Property &second){
            static int nextId = second.Id -1 ;
            return Property(first.Name,first.address,nextId,first.cost - second.cost);
        }
         
      friend   bool operator== (const Property &first,const Property &second){
             return first.Id == second.Id  ;  
         }
      friend ostream& operator<< (ostream &out, const Property &p) {
            out << "ID : " << p.Id << "\nName : " << p.Name << "\nCost : " << p.cost << endl;
            return out;
         }  
         Property& operator-=(Property& p){
            Property dublicate(*this);
               dublicate.cost -=1;
               return dublicate;
         }
         double getPropertyValue(){
        return  cost;
    }
    void  setPropertyValue(double c){
        this->cost = c;
    }
    // //this get function returns Owner class which is initialized as private Object
    // Owner& getOwner(){
    //     return *owner;
    // }
    // //by using this get function  we can return  id of the owner.
    // int getPropertyOwnerID(){
    //     return owner->getOwnerId();
    // }
    // //by using this get function  we can return  name of the owner.
    // string getPropertyOwnerName(){
    //     return owner->getOwnerName();
    // }
    // //by using this get function  we can access id of the owner.
    // void setPropertyOwnerId(int id){
    //     owner->setOwnerId(id);
    // }
    // //by using this get function  we can access id of the owner.
    // void setPropertyOwnerName(string name){
    //     owner->setOwnerName(name);
    // }
    // //by using this get function  we can return id of the property.
    // int getPropertyId(){
    //     return propertyId;
    // }
    // //by using this get function  we can return  id of the property.
    // string getPropertyName(){
    //     return propertyName;
    // }
    // //by using this get function  we can access id of the property.
    // void setPropertyId(int id){
    //     this->propertyId = id;
    // }
    // //by using this get function  we can return totalProperties of the properties.
    // void setPropertyName(string name){
    //     this->propertyName = name;
    // }
    // int getTotalProperties(){
    //     return Property::totalProperties;
    // }
    // //by using this get function  we can access totalProperties of the properties.
    // void setTotalProperties(int total){
    //     Property::totalProperties = total;
    // }

    ~Property(){
        cout << Name <<" destructed succesfuly" << endl;
    }
};