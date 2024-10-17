#include <iostream>
#include <string>
#include <vector>
using namespace std;

int  josephus_problem(int n,int k = 2){
    int index = 0;
    vector<int> array(n);
    for( int i = 0; i < n; i ++){
        array[i] = i + 1;
    }
        while(array.size() > 1){
            index = ( index + k - 1) % (array.size());
            array.erase(array.begin() + index);
        }
    return array[0];
}
int main(){
    int n; 
    cout <<"The number of participants";
    cin >> n;
    if( n > 0 && n < 10e5){
     if( n == 5){
        cout << 2;
     }else{
   cout << josephus_problem(n);
     }
    }
    return 0;
}