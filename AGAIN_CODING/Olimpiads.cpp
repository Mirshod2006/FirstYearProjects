// int main(){
//     int T;
//     cin >> T;
//     if( T >= 0 && T <= 45){
//        if(T < 28){
//         cout << 28 - T;
//        }
//        else{
//         cout << "Enough";
//        }
//     }
    
// }
/*bool unliOrNo(char x){
    bool u_li = false;
 char unli[6]{'a','e','i','o','u','y'};
 for(int i = 0; i < 6;i++){
    if(unli[i] == x){
       u_li = true;
    }
 }
    return u_li; 
}
int main(){
    int m = 0;
    string s1,s2;
    cin >> s1;
    cin >>s2;
    
    for(int i = 0; i < s1.length();i++){
       if( unliOrNo(s1[i]) !=  unliOrNo(s2[i])){
          m++;
       }
    }
    cout << m;
    return
}*/
// int whoIsYoung(vector<int> arr,int n,vector<int> lst){
//     int max = arr[0];
//     int j = 0;
//     for(int i = 0; i < n; i++){
//        if(max < arr[i]){
//         max = arr[i];
//         j = i;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;


int main(){
 int m,a,b,c,d;
  cin >> m;
  cin >> a >> b;
  cin >> c >> d;
  if(a < c && b <= c){
    cout << (a-1)+((c-b)-1)+(m-d);
  }
  else if(a <= c && c <= b && b <= d){
   cout << (a-1)+(m-d);
  }
  else if(a <= c && d <= b){
   cout << (a-1)+(m-b);
  }
  else if(c <= a && b >= d){
   cout << (c-1)+(m-b);
  }
  else if(c <= a && d >= b){
  cout << (c-1)+(m-d);
  }
  else if(a >= d && a <= b){
   cout << (c-1)+(m-b)+((a-d)-1);
  }

   return 0;
}