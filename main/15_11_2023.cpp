#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <math.h>

using namespace std;

// int main(){
//     int m = 0;
//    string number;
//    cin >> number;
//    if( number.length() == 9 && number[0] != '0'){
//      for( int i = 0; i < 9; i++){
//         m +=number[i] - 48;
//      }
//      if( m % 2 == 1){
//         cout << "yes";
//      }
//      else{
//         cout << "no";
//      }
//    }
//    else{
//     cout <<"no";
//    }
//     return 0;
// }
// int exponent(int a,int n){
//       if( n == 0){
//         return 1;
//       }
//       else{
//         return (a * exponent(a,n-1));
//       }
// }
// int main(){
//     unsigned long long x;
//     long double y;
//     long long t ;
//     cin >> t;
//     long n[t];
//         for(int i = 0; i < t; i ++){
//             cin >> n[i];
//             x = exponent(2,n[i]) + exponent(3,n[i]) + exponent(5,n[i])+ exponent(6,n[i]);
//             y = (double)cbrt(x);
//             if( y == (int)y){   
//                 cout <<"YES"<<endl;
//             }
//             else{
//                 cout << "NO"<<endl;
//             }
//             }
    
//     return 0;
// }
// #include <iostream>
// #include <vector>

// int main(){
//     long n, k;
//     std::vector<int> num;
//     int b = 0;
//     long int m = 0;
    
//     std::cin >> k >> n;
    
//     long long int A[k];
    
//     for(int i = 0; i < k; i++){
//         std::cin >> A[i];
        
//         if(A[i] == n){
//             m += A[i];
//             num.push_back(i+1);
//             b++;
//         }
//     }
    
//     std::cout << m << std::endl;
    
//     for(int i = 0; i < b; i++){
//         std::cout << num[i] << " ";
//     }
    
//     return 0;
// }
/*int factorial(int n){
     if(n == 1){
        return 1;
     }
     else{
        return n * factorial(n-1);
     }
}
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
      int a,b;
      cin >> a >> b;
      long long x = factorial(a);
      long long y = factorial(b);
       cout << gcd(x,y);
    return 0;
}*/
/*int main(){
    int n;
    vector<string> position(n);
    string post;
    cin >> n;
    // for(int i = 0; i < n; i++){
    //     cin >> post;
    //     position.push_back(post);
    // }

    cout << n + 1;

    return 0;
}*/
/*int gcd(long int a,long int b){
    int rest = a % b;
    if(rest == 0){
        return b;
    }
    else{
        return gcd(b,rest);
    }
}
int main(){
    int m = 0;
   long long int a ,b;
   cin >> a >> b;
   if( a >= 1 && b >=1 && a <= 10e12 && b <= 10e12){
   long long int c = gcd(a,b);  
   for(int i = 1; i <= c; i++){
       if(c % i == 0){
           m++;
       }
   }
   }
   cout << m;
    return 0;
}*/
// #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// int countCommonDivisors(int a, int b) {
//     int n = gcd(a, b);
//     int result = 0;
//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             result++;
//             if (n / i != i) {
//                 result++;
//             }
//         }
//     }
//     return result;
// }

// int main() {
//     int N, M;
//     cin >> N >> M;
//     cout << countCommonDivisors(N, M) << endl;
//     return 0;
// }


/*int main(){
    int m = 0;
    int a,b;
    cin >> a >> b;
    bool x = true;
    int c=0,d = 0;
    if(a>=1&&b>=1&&a<=10e5&&b<=10e5){
      for( int i = a;i <= b;i++){
        c = i;
        d = i;
         while(c > 0){
             int rest = c % 10;
             c /=10;
             if(rest == 0){
                x = false;
             }
            else if(d % rest!= 0){
                x = false;
             }
         }
         if(x){
            m++;
         }
      }
      cout << m;
    }
    return 0;
}*/
#include <iostream>
using namespace std;

bool isDivisibleByItself(int num) {
    int originalNum = num;
    while (num > 0) {
        int digit = num % 10;
        if (digit == 0 || originalNum % digit != 0) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int countNumbersDivisibleByItself(int L, int R) {
    int count = 0;
    for (int i = L; i <= R; i++) {
        if (isDivisibleByItself(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int L, R;
    cin >> L >> R;
    cout << countNumbersDivisibleByItself(L, R) << endl;
    return 0;
}
