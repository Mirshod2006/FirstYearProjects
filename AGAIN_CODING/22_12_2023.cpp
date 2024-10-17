#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;
// int binarySearch(vector<long long> &arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return -1; // If the target is not found
// }
// void uchburchak( long long array[], int n){
//      vector<long long> list;
//      long int x = 0;
//      for (int i = 0; i <= 10000; ++i) {
//         if( x <= 10000000){
//            x += i;
//            list.push_back(x);
//         }
//         else{
//             break;
//         }
//      }
//      for(int i = 0; i < n; i++){
//         if(binarySearch(list,array[i]) == -1){
//            cout << 0;
//         }
//         else{
//            cout << 1;
//         }
//      }
// }
// int main(){
//     int T;
//     cin >> T;
//     long long int list[T];
//     for(int i=0; i<T; i++){
//         cin >> list[i];
//         }
//     uchburchak(list,T);
//     return 0;
// }
// int binarySearch(vector<long long> &arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == target) {
//             return mid;
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return -1; // If the target is not found
// }
// void teskariKodlash( long array[], int n,long lst[]){
//      vector<long long> list;
//      long int x = 0;
//      for (int i = 0; i <= 1000; ++i) {
//         if( x <= 1000000){
//            x += i;
//            list.push_back(x);
//         }
//         else{
//             break;
//         }
//      }
//      for(int i = 0; i < n; i++){
//         if(binarySearch(list,lst[i]) == -1){
//            cout << 0;
//         }
//         else{
//             if(binarySearch(list,lst[i]) == array[i])
//              cout << 1;
//              else
//              cout << 0;
//         }
//      }
// }
// int main(){
//      int T;
//     cin >> T;
//     long int arr[T];
//     long int list[T];
//     for(int i=0; i<T; i++){
//         cin >> list[i] >> arr[i];
//         }
//     teskariKodlash(list,T,arr);
//     return 0;
// }
// int main(){
//     int T;
//     cin>>T;
//     long int arr[T];
//     for(int i = 0; i < T;i++){
//         cin>>arr[i];
//     }
//      for(int i = 0; i < T;i++){
//         cout<<(arr[i]/3) + 1<<endl;
//     }

// // }
// int binaryConvert(int n,int count){
//     long max = 0;
//  for(int i = 1; i<= n;i *= 2){
//      max = i;
//  }
//  if( max == 1 || max == 0){
//     count ++;
//      return count;
//  }
//  else{
//     count ++;
//     return binaryConvert(n-max,count);
//  }
// }
// int main(){
//     int count = 0;
//     int N;
//     cin>>N;
//     long int arr[N];
//     for(int i = 0; i < N; i++){
//         cin>>arr[i];
//     }
//     for(int i = 0; i < N; i++){
//         cout << binaryConvert(arr[i],count)<<endl;
//     }
//     return 0;
// }
// int main(){
//   long delta = 5;
//     int T;
//     cin>>T;
//    long int initial = 1;
//     for(int i = 1; i < T;i++){
//        initial += delta;
//        delta +=4;
//     }
//     cout << initial;
// }
// int main(){
//     long long int N;
//     cin >> N;
//     if(N == 1){
//        cout << N;
//     }
//     else{
//         if( N % 2 == 1){
//            cout << ((N-1)/2)+1;
//         }
//         else{
//             cout << (N/2)+1;
//         }
//     }
//     return 0;
// }
// int main(){
//     long long int N[3][2];
//     for(int i = 0; i < 3;i++){
//         for(int j = 0 ;j<2;j++){
//             cin >> N[i][j];
//         }
//     }
//      double a = (sqrt(pow(abs(N[0][0]-N[1][0]),2)+pow(abs(N[0][1]-N[1][1]),2)));
//      double b = sqrt(pow(abs(N[1][0]-N[2][0]),2)+pow(abs(N[1][1]-N[2][1]),2));
//      double c = sqrt(pow(abs(N[0][0]-N[2][0]),2)+pow(abs(N[0][1]-N[2][1]),2));
//     cout << a << endl;
//     cout << b << endl;
//     cout << c << endl;
//     if((a+b)>c && (a+c)>b && (b+c)>a){
//         cout << "uchburchak";
//         }
//     else{
//         cout << "uchburchak emas";
//     }
// }
/*int FibORacci(int a,int b,int m){
    if(m == 0){
        return a;
    }
    else if(m == 1){
        return b;
    }
    else{
        // int temp[m+1];
        // temp[0] = a;
        // temp[1] = b;
       long  int x = 0;
        for(int i=2; i<=m; i++){
            x = (a | b);
            a = b;
            b = x;
        }
        return x;
    }
}
int main(){
  unsigned long long int a, b, m;
   cin >> a >> b >> m;
   cout << FibORacci(a, b, m);
    return 0;
}*/
// int main(){
//    long int n, m;
//     cin >> n >> m;
//     long double h =  (2*m)/n ;
//     cout << h;
// }

// int main() {
//     int N, K;
//     cin >> N >> K;
//     int dublicate = N;
//     for (int i = 1, count = 0; count < N; i++) {
//         if (i % K != 0) {
//             count++;
//         }
//         if( count == N){
//             cout << i;
//         }
//     }

//     return 0;
// }
char alphabetChange(char input){
    int ascii = (int)input - 96;
    return (char)(27-ascii+96);
}
int main(){
    char temp;
    char temp2;
    string message;
    cin >> message;
    if(message.length() % 2 == 1){
       temp2 = message[message.length()-1];
    for(int i = 0;i < message.length();i++){
      temp = message[i];
      message[i] = message[i+1];
      message[i+1] = temp;
      i++;
    }
    message[message.length()-1] = temp2;
    for(int i = 0;i < message.length();i++){
         cout << alphabetChange(message[i]);
    }
    }
    else{
        for(int i = 0;i < message.length();i++){
            temp = message[i];
            message[i] = message[i+1];
            message[i+1] = temp;
            i++;
        }
        for(int i = 0;i < message.length();i++){
           cout << alphabetChange(message[i]);
        }

    }
}