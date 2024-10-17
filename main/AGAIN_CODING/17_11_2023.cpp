#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
/*int main(){
    int counter = 0;
    char tic_tac_toe[3][3];
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
              cin >>tic_tac_toe[i][j];
        }
    }
    for(int i = 0; i < 3; i ++){
        for(int j = 0; j < 3; j++){
              if(tic_tac_toe[i][j] == '*'){
                counter++;
              }
        }
    }
    if(counter % 2 == 0){
       cout << 'X';
    }
    else{
        cout << 'O';
    }
    return 0;
}*/

/*int main(){
    int num;
    cin >> num;
     int a1[num];
     int b1[num];
     int c1[num];

    for(int i = 0; i < num; i ++){
       cin >> a1[i];
      // a2[i] = (a1[i] % 2 == 1) ? true:false;
    }
    for(int i = 0; i < num; i ++){
       cin >> b1[i];
      // b2[i] = (b1[i] % 2 == 1) ? true:false;
    }
    for(int i = 0; i < num; i ++){
       c1[i]=(a1[i])^(b1[i]);
    }
    for(int i = 0; i < num; i ++){
       cout <<c1[i];
       cout <<" ";
    }
    return 0;
}*/
/*bool isPrime(int n){
    for( int i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int> divisors;
   long int a;
   long int b;
   int counter = 0;
   cin >> a >> b;
//    for(int i = 2; i <= a; i++){
//       if(a % i == 0){
//           divisors.push_back(i);
//       }
//    } 
//    for(int i = 0; i < divisors.size();i++){
//     if(b % divisors[i] != 0){
//         counter ++;
//     }
//    }
//    if(counter == divisors.size()){
    if(isPrime(a) && isPrime(b) && abs(a - b) == 2)
        cout <<"Yes";
    else
      cout <<"No";
//    }
//    else{
//     cout << "No";
//    }
    return 0;
}*/
/*int main(){
     int arr[2][2] = {{0,0},
                   {0,0}};
    // for(int i = 0; i < 2;i++){
    //     for (int j=0 ;j<2;j++){
    //     cin>>arr[i][j];
    //     }
    // }
    
    if(arr[0][1] != 0 && arr[1][0] == 0){
        cout << arr[0][0] + arr[0][1];
    }
    else if(arr[1][0] != 0){
        cout << arr[0][0] * arr[1][0];
    }
    return 0;

}*/

/*int main(){
    int m = 0;
    int n ;
    cin >> n;
    string s;
    for(int i = 0; i< n; i++){
       cin >> s;
       if(s == "X++" || s == "++X")
           m ++;
    else if(s == "X--" || s == "--X")
          m --;
    }
    cout << m;
    return 0;
}*/
/*#include <iostream>
#include <vector>

void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r, int x) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m,x);
        mergeSort(arr, m + 1, r,x);

        merge(arr, l, m, r);
        x++;
    }
}

int main() {
    int x = 0;
    vector<int> arr = {3,1,2,1,2,3};
    int arr_size = arr.size();

    cout << "Given array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
        cout << endl;

    mergeSort(arr, 0, arr_size - 1,x);

    cout << "\nSorted array is \n";
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << x;

    return 0;
}*/
// int main(){
//     int delta = 0;
//     int moods, del_day; 
//     cin >> moods >> del_day;
//      int arif[moods];
//      int hashim[moods];
//      int sum=0;
//      for (int i=0 ; i<moods ; i++){
//         cin >> arif[i];
//         cin >> hashim[i];
//      }
//     while(delta < del_day){
//        int sumA = 0; int sumH = 0;
//       int day_st,day_nd;
//       cin >> day_st >>day_nd;
//       for(int j = day_st; j <= day_nd; j++){
//         sumA +=arif[j];
//         sumH +=hashim[j];
//          if(sumA >= sumH)
//             sum += sumA;
//         else
//            sum += sumH;
//       }
//       cout << sum;
//       sum = 0;
//     }

//     return 0;
// }

/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        int totalHappiness = 0;
        for (int j = l - 1; j < r; j++) {
            int sumA = 0, sumH = 0;
            sumA +=a[j];
            sumH += b[j];
            totalHappiness += max(sumA, sumH);
        }

        cout << totalHappiness << endl;
    }

    return 0;
}*/
/*int main(){
    long long int n;
    cin >> n;
    if( n >= 1 && n <= 10e14){
        long int x = ceil((ceil(sqrt(8*n+1))-1)/2);
        long long int y = ((x-1)*x)/2;
         long int m = (n - y);
      if(m == 0){
       cout << x;
    }
      else{
        cout << m;
      }
    }
    return 0;
}*/
void reverseLongWords(int k,string& text){
 stringstream ss(text);
 string word;
 while(ss >> word){
    if(word.length() > k){
       reverse(word.begin(),word.end());
    }
    cout << word << " ";
 }
}
int main(){
    int k;
    string text;
    cin >> k;
    cin.ignore();// ignore() function ignores newline character
    getline(cin,text);
    cout << text;
    reverseLongWords(k,text);
    return 0;
}