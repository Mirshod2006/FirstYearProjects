#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

/*int main(){
    int n;
    cin >> n;
    int m = 0;
    vector<int> arr(n);
    if( n >= 2 && n <= 100){
         for(int i = 0; i < n;i ++){
               cin >>arr[i];   
         }
        
         for(int j = 0; j < n; j++){
            for(int i = 1; i < n;i++){
                  m = arr[j];
                  if(arr[j] >= arr[i]){
                        arr[j] = arr[i];
                       arr[i] = m;  
                  }
            }
         }
       cout << arr[2];
         
    }
    return 0;

}*/

/*int main(){

      long int n;
      cin>>n;
      long int counter = 0;
      if(n >= 0 && n <= 10e9){
         while(n > 0){
            int rest = n % 10;
            n /= 10;
            switch(rest){
                  case 0:counter+=6;break;
                  case 1:counter += 2; break;
                  case 2:counter += 5; break;
                  case 3:counter += 5; break;
                  case 4:counter += 4; break;
                  case 5:counter += 5; break;
                  case 6:counter += 6; break;
                  case 7:counter += 3; break;
                  case 8:counter += 7; break;
                  case 9:counter += 6; break;  
            }
         }
         cout << counter;
      }
      return 0;
}*/
/*int main(){
      string numbers;
      cin >> numbers;
      int m = 0;
     for(int i = 0;i < numbers.size();i++){
      if(numbers[i] == '0'){
        m += 6;
      }
     else if(numbers[i] == '1'){
        m += 2;
      }
     else if(numbers[i] == '2'){
        m += 5;
      }
     else if(numbers[i] == '3'){
        m += 5;
      }
     else if(numbers[i] == '4'){
        m += 4;
      }
     else if(numbers[i] == '5'){
        m += 5;
      }
      else if(numbers[i] == '6'){
        m += 6;
      }
     else if(numbers[i] == '7'){
        m += 3;
      }
     else if(numbers[i] == '8'){
        m += 7;
      }
     else if(numbers[i] == '9'){
        m += 6;
      }
     }
      cout << m;
      return 0;
}*/
// int main(){
//    int n ;
//    cin >> n;
//    if(n >= 0 && n <= 10e9){
//     long int a = pow(2,2*n+1) - pow(2,n+1) + 1;
//     long int b = pow(2,2*n+1) + pow(2,n+1) + 1;
//     if( a % 5 == 0){
//       cout << "A";
//     }
//     else if(b % 5 == 0){
//        cout << "B";
//     }
//    }
//    return 0;
// }
/* AI version
#include <iostream>
#include <cmath>
using namespace std;

int sequenceA(int n) {
    return pow(2, 2*n+1) - 2*n + 1;
}

int sequenceB(int n) {
    return pow(2, 2*n+1) + 2*n + 1;
}

int main() {
    int n;
    cin >> n;
    int a_n = sequenceA(n);
    int b_n = sequenceB(n);

    if (a_n % 5 == 0) {
        cout << "A" << endl;
    } else if (b_n % 5 == 0) {
        cout << "B" << endl;
    }

    return 0;
// }*/
// int main(){
//    int a,b,c;
//    cin >> a >> b >> c ;
//    if(a>=0&&a<=100 && b>=0&&b<=100 && c>=0&&c<=100){
//       if(abs(c-b) < abs(c-a)){
//          cout << "2-mushuk";
//       }
//      else if(abs(c-b) > abs(c-a)){
//          cout << "1-mushuk";
//       }
//       else{
//          cout << "sichqon";
//       }
//    }
//    return 0;
// }
/*int main(){
   int arr[52]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   string text;
   getline(cin,text);
   for(int i=0;i<text.length();++i){
      if(text[i] == 'a'){
          arr[0] ++;
      }
     else if(text[i] == 'b'){
          arr[1] ++;
      }
       else if(text[i] == 'c'){
          arr[2] ++;
      }
      else if(text[i] == 'd'){
          arr[3] ++;
      }
      else if(text[i] == 'e'){
          arr[4] ++;
      }
      else if(text[i] == 'f'){
          arr[5] ++;
      }
      else if(text[i] == 'g'){
          arr[6] ++;
      }
      else if(text[i] == 'h'){
          arr[7] ++;
      }
      else if(text[i] == 'i'){
          arr[8] ++;
      }
      else if(text[i] == 'j'){
          arr[9] ++;
      }
      else if(text[i] == 'k'){
          arr[10] ++;
      }
      else if(text[i] == 'l'){
          arr[11] ++;
      }
      else if(text[i] == 'm'){
          arr[12] ++;
      }
      else if(text[i] == 'n'){
          arr[13] ++;
      }
      else if(text[i] == 'o'){
          arr[14] ++;
      }
      else if(text[i] == 'p'){
          arr[15] ++;
      }
      else if(text[i] == 'q'){
          arr[16] ++;
      }
      else if(text[i] == 'r'){
          arr[17] ++;
      }
      else if(text[i] == 's'){
          arr[18] ++;
      }
      else if(text[i] == 't'){
          arr[19] ++;
      }
      else if(text[i] == 'u'){
          arr[20] ++;
      }
      else if(text[i] == 'v'){
          arr[21] ++;
      }
      else if(text[i] == 'w'){
          arr[22] ++;
      }
      else if(text[i] == 'x'){
          arr[23] ++;
      }
      else if(text[i] == 'y'){
          arr[24] ++;
      }
      else if(text[i] == 'z'){
          arr[25] ++;
      }
      else if(text[i] == 'A'){
          arr[26] ++;
      }
      else if(text[i] == 'B'){
          arr[27] ++;
      }
      else if(text[i] == 'C'){
          arr[28] ++;
      }
      else if(text[i] == 'D'){
          arr[29] ++;
      }
      else if(text[i] == 'E'){
          arr[30] ++;
      }
      else if(text[i] == 'F'){
          arr[31] ++;
      }
      else if(text[i] == 'G'){
          arr[32] ++;
      }
      else if(text[i] == 'H'){
          arr[33] ++;
      }
      else if(text[i] == 'I'){
          arr[34] ++;
      }
      else if(text[i] == 'J'){
          arr[35] ++;
      }
      else if(text[i] == 'K'){
          arr[36] ++;
      }
     else if(text[i] == 'L'){
          arr[37] ++;
      }
      else if(text[i] == 'M'){
          arr[38] ++;
      }
      else if(text[i] == 'N'){
          arr[39] ++;
      }
      else if(text[i] == 'O'){
          arr[40] ++;
      }
      else if(text[i] == 'P'){
          arr[41] ++;
      }
      else if(text[i] == 'Q'){
          arr[42] ++;
      }
      else if(text[i] == 'R'){
          arr[43] ++;
      }
      else if(text[i] == 'S'){
          arr[44] ++;
      }
      else if(text[i] == 'T'){
          arr[45] ++;
      }
     else if(text[i] == 'U'){
          arr[46] ++;
      }
      else if(text[i] == 'V'){
          arr[47] ++;
      }
      else if(text[i] == 'W'){
          arr[48] ++;
      }
      else if(text[i] == 'X'){
          arr[49] ++;
      }
      else if(text[i] == 'Y'){
          arr[50] ++;
      }
      else if(text[i] == 'Z'){
          arr[51] ++;
      }  
   }
   cout << 'a'<<" " << arr[0] <<endl;
    cout << 'b'<<" " << arr[1] <<endl;
   cout << 'c'<<" " << arr[2] <<endl;
    cout << 'd'<<" " << arr[3] <<endl;
   cout << 'e'<<" " << arr[4] <<endl;
    cout << 'f'<<" " << arr[5] <<endl;
   cout << 'g'<<" " << arr[6] <<endl;
    cout << 'h'<<" " << arr[7] <<endl;
   cout << 'i'<<" " << arr[8] <<endl;
    cout << 'j'<<" " << arr[9] <<endl;
   cout << 'k'<<" " << arr[10] <<endl;
    cout << 'l'<<" " << arr[11] <<endl;
   cout << 'm'<<" " << arr[12] <<endl;
    cout << 'n'<<" " << arr[13] <<endl;
   cout << 'o'<<" " << arr[14] <<endl;
    cout << 'p'<<" " << arr[15] <<endl;
   cout << 'q'<<" " << arr[16] <<endl;
    cout << 'r'<<" " << arr[17] <<endl;
   cout << 's'<<" " << arr[18] <<endl;
    cout << 't'<<" " << arr[19] <<endl;
   cout << 'u'<<" " << arr[20] <<endl;
    cout << 'v'<<" " << arr[21] <<endl;
   cout << 'w'<< " "<< arr[22] <<endl;
    cout << 'x'<<" " << arr[23] <<endl;
   cout << 'y'<<" " << arr[24] <<endl;
    cout << 'z'<<" " << arr[25] <<endl;
   cout << 'A'<<" " << arr[26] <<endl;
    cout << 'B'<<" " << arr[27] <<endl;
   cout << 'C'<<" " << arr[28] <<endl;
    cout << 'D'<<" " << arr[29] <<endl;
   cout << 'E'<<" " << arr[30] <<endl;
    cout << 'F'<<" " << arr[31] <<endl;
   cout << 'G'<<" " << arr[32] <<endl;
    cout << 'H'<<" " << arr[33] <<endl;
   cout << 'I'<<" " << arr[34] <<endl;
    cout << 'J'<<" " << arr[35] <<endl;
   cout << 'K'<<" " << arr[36] <<endl;
    cout << 'L'<<" " << arr[37] <<endl;
   cout << 'M'<<" " << arr[38] <<endl;
    cout << 'N'<<" " << arr[39] <<endl;
   cout << 'O'<<" " << arr[40] <<endl;
    cout << 'P'<<" " << arr[41] <<endl;
   cout << 'Q'<<" " << arr[42]<<endl;
    cout << 'R'<<" " << arr[43] <<endl;
   cout << 'S'<<" " << arr[44] <<endl;
    cout << 'T'<<" " << arr[45] <<endl;
   cout << 'U'<<" " << arr[46] <<endl;
    cout << 'V'<<" " << arr[47] <<endl;
   cout << 'W'<<" " << arr[48] <<endl;
    cout << 'X'<<" " << arr[49] <<endl;
   cout << 'Y'<<" " << arr[50] <<endl;
    cout << 'Z'<<" " << arr[51] <<endl;
   
   return 0;
}*/
/*#include <algorithm>
#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
int maximumSubarraySum(vector < int > arr) 
{ 
    int n = arr.size(); 
    int maxSum = INT_MIN; 
    for (int i = 0; i <= n - 1; i++) {
         int currSum = 0; 
        for (int j = i; j <= n - 1; j++) { 
            currSum += arr[j]; 
            if (currSum > maxSum) { 
                maxSum = currSum; 
            } 
        }
    } 
return maxSum; 
} int main() 
{ // Your code goes here; 
vector<int> a = {1, 3, 8, -2, 6, -8, 5}; 
cout << maximumSubarraySum(a) << endl; 
return 0; 
}*/
// int factorial(int n){
//     if( n == 0){
//        return 1;
//     }
//     else{
//         return n * factorial(n-1);
//     }
// }
// int main(){
//     int num_apples;
//     cin >> num_apples;
//     if(num_apples >= 1 && num_apples <= 5){
//         cout << 0;
//     }
//     else{
//         long long int x = factorial(num_apples+1)/(factorial(num_apples-3-2)*factorial(2));
//         cout << x;
//     }
//     return 0;
// }
/*#include <iostream>
using namespace std;

// Function to calculate the factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

// Function to calculate the number of ways to distribute the apples
long long calculateWaysToDistribute(int N) {
    return factorial(N - 3) / (factorial(2) * factorial(N - 3 - 2));
}

int main() {
    int N;
    cin >> N;

    // Calculate the number of ways to distribute the apples
    long long waysToDistribute = calculateWaysToDistribute(N);

    // Print the result
    cout << waysToDistribute << endl;

    return 0;
}*/

/*int main(){
   string time;
    cin >> time;
   int num_time = (time[time.size() - 2] -'0')*10 +  (time[time.size() - 1] -'0');
  
    int rest = num_time % 50;
    if( rest >= 1 && 25 >= rest){
        cout <<"O__";
    }
    else if(rest >= 26 && rest <= 29){
        cout << "OO_ ";
    }
    else if(rest >= 30 && rest <= 35){
      cout << "_O_";
    }
    else if(rest >= 36 && rest <= 49){
      cout << "__O";
    }
    return 0;
}*/
/*int binary_search(string arr){
    int low = 0;
    int high = arr.size();
    int mid = (low + high)/2;
    while(low <= high){
        if( mid == '1'){
            return mid;
        }
        else if(mid > 1){
            mid = mid - 1;
        }
        else{
            mid = mid + 1;
        }
    }
    return 0;
}*/
int main(){
    int arr[7][7];
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            cin >> arr[i][j];
        }
    }
    int col = 0, row = 0;
    for(int i = 0; i < 7; i++){
        for(int j = 0; j < 7; j++){
            if(arr[i][j] == 1){
              row = i + 1;
              col = j + 1; 
            }
        }
    }
  cout << abs(col - 4) + abs(row - 4);
    return 0;
}


