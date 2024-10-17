#include "Property.h"
//#include "Owner.h"
int Property::totalProperties = 0;
int main(){
    // // creating an owner object
    // Owner* abbos = new Owner("Abbos",1,100);

    // // creating a property object
    // Property* property = new Property("house",21,abbos); // changed from Property property = Property("house",21,abbos) to Property* property = new Property("house",21,abbos)
    // // getting and displaying the owner id and name
    // cout << "Owner ID: " << property->getPropertyOwnerID() << endl;
    // cout << "Owner Name: " << property->getPropertyOwnerName() << endl;

    // // setting new owner id and name
    // property->setPropertyOwnerId(2);
    // property->setPropertyOwnerName("Abror");

    // // getting and displaying the updated owner id and name
    // cout << "Updated Owner ID: " << property->getPropertyOwnerID() << endl;
    // cout << "Updated Owner Name: " << property->getPropertyOwnerName() << endl;

    // // setting total properties
    // property->setTotalProperties(3);

    // // getting and displaying total properties
    // cout << "Total Properties: " << property->getTotalProperties() << endl;

    // // deleting the property object
    // delete property;

    // // deleting the owner object
    // delete abbos;

    Property p1("Luxury Villa","Residential",1001,500000);
    Property p2("Modern House","Commercial",1002,750000);
    if(p1 == p2){
        cout << "The properties have the same ID."<<endl;
    }else{
        cout << "The properties do not have the same ID."<<endl;
    }


     Property p3 = p1 + p2;
     cout << "Price of combined property :" << p3.getPropertyValue() << endl; 
     Property  p4 = p1 - p2;
     cout << "Difference between  price of first property and second property:" << p4.getPropertyValue() << endl;  
    return 0;
}