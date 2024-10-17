#include <iostream>
using namespace std;

enum MealTypes{NO_PREF,REGULAR,LOW_FAT,VEGETARIAN};

struct Passenger
{
    string name;
    MealTypes mealPref;
    bool isFrequentFler;
    string freqFlyerNo;
};

int main(){
    /*char ch = 'Q';
    char* p = &ch;
    cout << *p<<endl;;
    ch = 'Z';
    cout << *p<<endl;
    *p = 'G';
    cout << ch;*/
    // int* a,*b,*c;
    // int n = 7;
    // a = &n;
    // n = 8;
    // cout << *a;
    // double f[5];
    // int m[10];
    // f[4] = 2.5;
    // m[2] = 4;
    // cout << f[m[2]];
    // int a[] = {1,2,3,4,5,67,8,9,0,57,98,60,443,21,20};
    // cout << a[11];
    /*char c[] ={'c','a','t'};
    char* p = c;
    char* q = &c[0];
    cout << c[2]<< p[2] << q[2];*/
    Passenger client1 = {"Jamol",REGULAR,true,"76152431"};

    cout << client1.name<<endl;

    client1.freqFlyerNo = "76152442";

    cout << client1.freqFlyerNo;

    Passenger *p;

    p = new Passenger;
    p->name = "Pocahontas";
    p->mealPref = REGULAR;
    p->freqFlyerNo = "766342325";
    p->isFrequentFler = false;
    return 0;
}