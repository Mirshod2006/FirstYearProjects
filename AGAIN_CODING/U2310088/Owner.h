#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Owner{
    private:
    int* NameIds;
    int len; // lenght of above defined array
    int ownerId;
    string ownerName;
    public:
    Owner(string name,int Id,int l){
    ownerName = name;
    len = l;
    ownerId = Id; 
    NameIds = new int[len];//assuming
    }
    void addNameIds(int id, int i){// i is index of array
        if(i >= 0 && i <len){
            NameIds[i] = id;
        }
    }
    void displayNameIds(){
        for(int i = 0; i < len; i++){
            cout << i+1 << ". " <<NameIds[i] << endl;
        }
    }
    int getOwnerId(){
        return ownerId;
    }
    string getOwnerName(){
        return ownerName;
    }
    void setOwnerId(int ownerid){
        this->ownerId = ownerid;
    }
    void setOwnerName(string ownername){
        this->ownerName = ownername;
    }
    ~Owner(){
        delete[] NameIds;
    cout << ownerName <<" deconstructor worked" << endl;
}
};