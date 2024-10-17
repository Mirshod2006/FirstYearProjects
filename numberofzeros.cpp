#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

/*int main(){
    int m;
    int array[m];
    cin >> m;
    unordered_map<int, int> mapa;
    vector<int> list;
    if(m >= 1 && m <= 100){
        for (int i = 0; i<m;i++){
            cin >> array[i];
            }
for(int i = 0; i<m;i++){
    mapa[array[i]]++;
}

for(auto it : mapa) {
    int i = 0;
     list.resize(mapa.size());
     list[i] =it.second;
    i ++;
   }
 
cout << m - list[0];
    
  }
        
    return 0;
}*/

// int main(){

//     int n, a[101] ={0},k,max = 0;
//     cin >> n;
//     for(int i=0 ; i<n ; i++){
//         cin >> k;
//         a[k]++;
//         }
//        for(int i = 0; i < 101; i++) {
//         if(a[i] > a[max]) max = i; 
//     }
//     cout << n - a[max];
//     return 0;
// }
/*int main(){
   string  m;
    cin >> m;
    long long int t = 0; 
    if( m.size() <= 10e10000){
         for( int i =0; i < m.size(); i++)
         t += ((long long)(m[i]-'0'));
       cout << t;
         }
    return 0;
}*/
// #include<iostream>
// using namespace std;

// int main()
// {
// string m ;
//  cin >> m;
//  if( m.size() == 6 &&  (m[0] + m[1] + m[2]) == (m[3] + m[4] + m[5])){
//        cout << "Yes";
//  }
//  else{
//    cout << "No";
//  }
//     return 0;
// }
/*int main(){
  int x1,x2,y1,y2;
  cin >> x1 >> y1 >> x2 >> y2;
  cout << setprecision(1) << fixed <<max(abs( x2 - x1), abs( y2 -y1)) * 0.5;
  return 0;
}*/

/*int main(){
  long long int n;cin >>n;
  long int m = 1;
  long int count = 0;
  if( n >= 1 &&  n <= 10e18){
    while ( n > 0){
      n -= m;
      m ++;
      count ++;
    }
    if( n == 0){
      cout << count;
    }
      else{
    cout << count - 1 ; 
    }
    //cout << (n < 0) ? count - 1 : count ;
  }
  return 0;
}*/
int main(){
  int  n , k;
  cin >> n >> k;
  int count = 0;
  int arr[n];
  if( k >= 1 && n >= k && n <= 50 ){
    for( int i=0;i<n;i++){
     cin >> arr[i];
   
    }
    for( int i=0;i<n;i++){
      if( arr[i] >= arr[i + 1]){
      if( arr[i] >= 0 && 100 >= arr[i] && arr[i] >= arr[k - 1]){
        count ++;
     }
      }
    }
    if( count != n)
    cout << count;
    else if( count == n){
     if( arr[0] == 0) cout << 0;
     else cout << arr[0];
     }
  } 

  return 0;
}
