#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;
/*string intriga(int N,int K,int arr[]){
  int count = 0;
  for(int i = 0; i<N;i++){
     if(arr[i] <= 0){
        count ++;
     }
  }
  if(N >= K && K <= count)
     return "Qizg'in";
  else
    return "Zerikarli";
}
int main(){
    int n;
    cin >> n;
    int N,K;
    for(int i = 0; i<n;i++){
     cin >> N >> K;
      int arr[N];
     for(int j = 0;j < N; j++ ){
       cin >> arr[j];
     }
       cout << intriga(N,K,arr)<<endl;
    }
}*/
// int main(){
//     int n;
//     cin >> n;
//     double N,K;
//     cin >> N >> K;
//     // cout << (int)(N*2) << endl;
//     // cout << (K);
//     if(n == N + K && (N*2 == (int)(N*2)) && (K*2 == (int)(K*2))){
//        cout <<"YES";
//     }
//     else{
//         cout <<"NO";
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin >> n;
//     switch(n){
//         case 1: cout << 32;
//              break;
//         case 2: cout << 40;
//              break;
//         case 3: cout << 46;
//              break;
//         case 4: cout << 25;
//              break;
//         case 5: cout << 44;
//              break;
//         case 6: cout << 41;
//              break;
//         case 7: cout << 33;
//              break;
//         case 8: cout << 43;
//              break;
//         case 9: cout << 48;
//              break;
//         case 10: cout << 22;
//              break;
//         case 11: cout << 5;
//              break;
//         case 12:cout << 25;
//              break;
//         case 13:cout << 9;
//              break;
//         case 14:cout << 18;
//              break;
//         case 15:cout << 11;
//              break;
//     }
// }


// #include <string>
// #include <iostream>

// int findPerfectOdd(long int x){
//    long int count = 0;
//    long  int outnum = 0; 
//  for(int i = 1; i < 10e18;i++){
//       std::string var = std::to_string(i);
//      long  int adder1 = 0;
//      long  int adder2 = 0;
//       for(int j = 0; j < var.length(); j++){
//           if(var[j] % 2 == 1){
//               adder1++;
//           }
//           adder2++;
//       }
//       if(adder1 == adder2){
//           count ++;
//       }
//        if(count == x){
//           outnum = i;
//           break;
//       }
//  }
//  return outnum;
// }
// int main(){
//   long int n;
//    cin >> n;
//    cout << findPerfectOdd(n);
// }
#include <iostream>
#include <string>
using namespace std;
/*string convertToBaseN(int k, int n) {
    string result = "";
    if(k == 0){
      return "0";
    }
    else{
    while (k > 0) {
        int remainder = k % n;
        if (remainder < 10) {
            result = to_string(remainder) + result;
        } else {
            result = char('A' + remainder - 10) + result;
        }
        k /= n;
      }
    }
    return result;
}

int main() {
    int k, n;
    cin >> k >> n;

    string result = convertToBaseN(k, n);
    cout << result << endl;

    return 0;
}*/


// int main(){
//    bool x = true;
//   int temp = 0;
//   int sum = 0;
//   int N;
//   cin >> N;
//   int arr[N];
//   for(int i = 0; i < N; i++){
//     cin >> arr[i];
//   }
//   sort (arr,arr+N);
//   for(int i = 0; i<N;i++){
//     for(int j = 0; j <N;j++){
//       if(arr[i] == arr[j]){
//         sum ++;
//       }
//       cout << sum << endl;
//     }
//   }
//   if(sum /N != N){
// cout << N - sum/2;
// }else{
//   cout << 0;
// }

 
// //   for(int i = 2; i <= 300; i++){
// //   int count = 0;
// //     for(int j = 2; j < i;j++){
// //        if( i % j == 0)
// //        {
// //         x = x & false;
// //        }
// //        if(x){
// //         arr.push_back(i);
// //        }
// //     }
// //   }
// //  cout << arr[N];
//   return 0;
// }
// int main(){
//   int x,y;
//   cin >> x >> y;
//    int count = 0; 
//    if( abs(x-y )% 2 == 1){
//       cout << (abs(x-y)/2) + 1;
//    }
//    else{
//       cout << (abs(x-y)/2);
//    }
//   return 0;
// }
// int find(int n,vector<int> arr){
//   int temp;
//   for(int i = 0;i < n;i++){
//         if(arr[i] >= arr[i]){
//          temp = arr[i];
//          arr[i] = arr[i+1];
//          arr[i+1] = temp;
//     }
//   }
//   return arr[n-1];

#include <iostream>
#include <string>
using namespace std;
//  int main(){
//  long long int count = 0;
//  long long int n,m,k;
//  cin >> n >> m >>k;
//     if (k == 0) {
//         count = n / m;
//     } else if (k < m) {
//         count = (n / m) + (n % m >= k);
//     }

//     cout << count << endl;
//  return 0;
// }
int gcd(int a,int b){
    int rest = a % b;
    if(rest == 0){
        return b;
    }
    else{
        return gcd(b,rest);
    }
}
int main(){
 long long int l,r;
 cin >> l >> r;
 long long int count = 0;
 long long int temp = l;
 for(int i = l;i <= r;i++){
    temp = gcd(temp,i);
 }
 cout << temp;
  return 0;
}