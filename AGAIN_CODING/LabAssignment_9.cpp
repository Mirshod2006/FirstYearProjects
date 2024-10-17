/*HAMROYEV MIRSHOD
SECTION 002
ID U2310088*/


#include <iostream>
#include <vector>

using namespace std;
void array_displayer(int n){
    int arr[n];
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    cout << "Array Elements are : ";
    for(int i = 0;i < n; i++){
        cout << arr[i]<<" ";
    }
}
 int list_average(int n){
    int x = 0;
    vector<int> arr(n);
    for (int i=0 ; i<n ; i++) {
        cin >> arr[i];
        x +=arr[i];
    }
    return (x/n);
 }
 void deleteAnElement(){
        int n;
        cout << "Enter the number of array: ";
        cin >> n;
        int a[n];
        cout << "Enter elements in an array:";
        for (int i=0 ; i<n ; i++) {
           cin >> a[i];
        }
        int pos;
        cout << "Enter position to be deleted: ";
        cin >> pos;
        if (pos >= 1 && pos <= n) {
            for (int j = pos - 1; j < n-1; j++) {
                a[j] = a[j+1];
            }
        }
        for (int i=0 ; i<n-1 ; i++) {
           cout << a[i] <<" ";
        }
 }

int main(){
    int m;
    cout << "1.Display Array\n2.Calculate Average\n3. Insertion\n4.Delete An element from an array\n5.Exit Program\nEnter the choice you want to perform:  ";
    cin >> m;
    while(true){
    switch(m){
    case 1:{
        int n;
  cout << "Enter the size of an Array:";
  cin >> n;
    array_displayer(n);
    break;
    }
   case 2:{
    int n;
  cout << "Enter the size of an Array:";
  cin >> n;
  cout << list_average(n);
  break;
   }
   case 3:{
    int n;
  cout << "Enter the size of an Array:";
  cin >> n;
  vector<int> current(n);
  int element;
  cout << "Enter the element to insert: ";
  cin >> element;
  current.push_back(element);
  for(int i = 0; i < n;i++){
    cout << current[i];
    break;
  }
   }
   case 4:{
     deleteAnElement();
     break;
   }
   case 5:{
    return 0;
   }
   default:{
    cout << "Please, enter the  number(1-5)!";
    return 1;
   }
    }
}
     return 0;
}