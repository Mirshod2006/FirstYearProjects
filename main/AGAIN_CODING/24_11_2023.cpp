
#include <iostream>
using namespace std;
// int gcd(int a, int b) {
//     if (b == 0) {
//         return a;
//     }
//     return gcd(b, a % b);
// }

// int main() {
//     int l, r;
//     cin >> l >> r;

//     int result = l;
//     for (int i = l + 1; i <= r; i++) {
//         result = gcd(result, i);
//         if(result == 1){
//           break;
//         }
//     }

//     cout << result << endl;

//     return 0;
// }

long long pentatop(int n) {
    return (factorial(n+3)/(factorial(n+3-4)*factorial(4)))%1000000007;
}

int factorial(int n){
    if(n == 0){
       return 1;
    }
    else{
        return n * factorial(n-1);
    }
}
int main() {
   long long  int n;
    cin >> n;
 //unsigned long long int result = (factorial(n+3)/(factorial(n-1)*factorial(4)))%1000000007;
long long int result = pentatop(n);
 cout << result;
return 0;
}