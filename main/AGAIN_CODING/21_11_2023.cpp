#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>

using namespace std;
/*int sumDigit(long long num){
    long long int result = 0;
  if(num > 0 && num < 10){
      return num;
  }
  else{
    while(num > 0){
        result +=(num % 10);
        num /= 10; 
    }
    return sumDigit(result);
  }
}
int main(){
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
            cout << sumDigit(arr[i]);
    }
}*/
/*int main() {
    bool x = true;
   long long int b;
   long long int k;
    cin >> b >> k;
    long long int a = 0;
    for(long long int i = 2; i <= b;i++){
        if((b*k)%i == 0 && i % b == 0 && k % i == 0){
            a = i;
            x = false;
            break;
        }
    }
    if(x==true){
        cout << -1;
    }
    else{
  cout << a << " "<<(b*k)/a;
    }
    return 0;
}*/


/*long long gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    long long B, K;
    cin >> B >> K;

    vector<pair<long long, long long>> solutions;

    for (long long n = 1; n <= 100000; n++) {
        long long m = n - 1;
        if (gcd(m, n) == B && gcd(m, n) == K) {
            solutions.push_back(make_pair(m, n));
        }
    }

    if (solutions.empty()) {
        cout << -1 << endl;
    } else {
        long long maxDiff = 0;
        for (auto p : solutions) {
            maxDiff = max(maxDiff, p.second - p.first);
        }
        for (auto p : solutions) {
            if (p.second - p.first == maxDiff) {
                cout << p.first << " " << p.second << " ";
            }
        }
    }

    return 0;
}*/

// int main(){
//     long int n;
//     cin >> n;
//     if(n >= 1 && n <= 10e9){
//     long int x = pow(2,n-1);
//     long int z = (10e9+7);
//     long int y = x % z;
//       cout << y;
//     }
//     return 0;
// }
/*int main(){
    int variable = 0;
    string n;
    cin >> n;
    for(int i = 0; i < n.length();i++){
        if((variable + (n[0]-'0'))/2 == 0){
          cout <<"";
        }else{
               cout << (variable + (n[i]-'0'))/2;
        }
        if((variable + (n[i+1]-'0'))%2 == 1){
              variable = 10;
        }else{
            variable = 0;
        }
    }
    
    return 0;
}*/
// int main(){
//     int A,B;
//     long int M;
//     long int maxSum = 0;
//     cin>>A>>B>>M;
//     if(A>=1 && A<=1000 && B>=1 && B<=1000 && M>=1 && M <=10e6){

//        if( A >= B){
//         if((M%B)<=(A%B)){
//          int x = (M)/B;
//          maxSum = x * B;
//         }else{

//          int x = (M - A)/B;
//          maxSum = x * B + A;
//         }
//        }
//        else{
//         if((M%A)<=(B%A)){
//          int x = (M)/A;
//          maxSum = x * A;
//         }else{
//         int x = (M - B)/A;
//         maxSum = x * A + B;
//         }
//        }
//        cout << maxSum;
//     }

//     return 0;
// }



// int main() {
//     int A, B, M;
//     cin >> A >> B >> M;
//     int time = M / A;
//     int extraVolume = M % A;
//     int ex_water = extraVolume;
//      int water;
//   int maxwater[time];
//   for(int i = 0; i < time;i++){
//       extraVolume += A;
//     water = extraVolume % B;
//       maxwater[i] = min(ex_water, water);
//   }
//   for(int i = 0; i  < time; i++){
//     cout << maxwater[i]<< endl;
//   }
//   sort(maxwater, maxwater+time);
//    cout << M - maxwater[0];
//     // int g = gcd(A, B);
//     // for (int i = 0; i <= M / g; i++) {
//     //     int water = i * A + (M - i * g);
//     //     maxWater = max(maxWater, water);
//     // }

//     return 0;
// }
// string trueOrNo(int x){
//        int oddcount = 0;
//        int evencount = 0;
//       for(int i = 1; i <= x;i++){
//         if(x % i == 0){
//            if(i % 2 == 1)
//            oddcount++;
//            else
//            evencount++;
//         }
//       }
//       if(oddcount == evencount){
//         return "YES";
//       }
//       else{
//         return  "NO";
//       }
// }
// int main (){
//     int T;
//     cin >> T; 
//     long long int N[T];
//     for (int i = 0; i < T; i++) {
//         cin >> N[i];
//         cout << trueOrNo(N[i])<<endl;
//     }
//     return 0;
// }
// int whoIsYoung(vector<int> arr,int n,vector<int> lst){
//     int max = arr[0];
//     int j = 0;
//     for(int i = 0; i < n; i++){
//        if(max < arr[i]){
//         max = arr[i];
//         j = i;
//        }
//     }
//     return (lst[j]+1);
// }
// int main(){
//     int N;
//    long int count = 0;
//     cin >> N;
//     vector<int> nollar;
//     vector<int> index;
//     vector<long long> arr(N);
//     vector<int> list(N);
//     for (int i = 0; i < N; i++) {
//         cin >> arr[i];
//         cout << ' ';
//         cin >> list[i];
//         }
//     for(int i = 0; i < N; i++){
//         if(list[i] == 0){
//            nollar.push_back(arr[i]);
//            index.push_back(i);
//         }
//         else{
//             count ++;
//         }
//     }
//     if(count == N){
//         cout << -1;
//     }else{
//         cout << whoIsYoung(nollar,index.size(),index);
//     }
//     return 0;
// }