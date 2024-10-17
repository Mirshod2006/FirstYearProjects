#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <sstream>
using namespace std;
// bool beatyNum(unsigned long long number){
 
//          bool x = true;
//         bool m = true;
//     while(number > 0){
//         int rest = number % 10;
//         number /= 10;
//       if(rest % 2 == 1){
//         m = true;
//       }
//       else{
//         m = false;
//       }
//       x = x & m;
//     }
//     return x;
//    }


// int main(){
//     long long  int q = 0;
//     long int n;
//     cin >> n;
//   if( n >= 1 && n <= 10e5){
//     for(unsigned long long int i =pow(10,(n-1)); i < pow(10,n);i++){
//       if( beatyNum(i))
//         q ++;
//     }
//     cout << q;
//   }
//     return 0;
// }
/*int main() {
  int vazn,boy;
  cin >> vazn >>boy;
  double tvi = (10000 * vazn)/(double)pow(boy,2);
  if(tvi < 16){
   cout << "Yuqori vazn yetishmasligi";
  }
  else if(16 <= tvi && tvi < 18.5){
    cout << "Vazn yetishmasligi";
  }
  else if(18.5 <= tvi && tvi <= 25){
  cout << "Ideal vazn";
  }
  else if(25 < tvi && tvi <= 30){
  cout << "Ortiqcha vazn";
  }
  else if(30 < tvi && tvi <= 35){
    cout << "Semizlikning I darajasi";
  }
  else if(35 < tvi && tvi <= 40){
    cout << "Semizlikning II darajasi";
  }
  else if(tvi > 40){
    cout << "Semizlikning III darajasi";
  }
  return 0;
}*/
/*int main(){
 unsigned long long int m = 0;
  long long int n;
  cin >> n;
  for(long int i = 1; i <= n; i++){
     long long int number = i;
     while(number != 0){
      long long int reminder = number % 10;
      number /= 10;
      m ++;
     }
  }
  cout << m;
}*/
// int resultsum(int x){
//   if(x == 1){
//      return 1;
//   }
//   else{
//   return (x)* pow(10,x-1) + resultsum(x-1);
//   } 
// }
// int main(){
//   long int count = 0;
//   long int n ;
//   cin >> n; 
//   long long int x = 9;
//   if(n >= 1 && n <= 9){
//      cout << n;
//   }
//   else{
//   do{
//     x *=pow(10,count);
//      n -= x;
//      count ++;
   
//     if(x >= n){
//       cout << n * (count+1) + 9 * resultsum(count);
//     }
//   }while(n > x);
//   }

//   return 0;
// }
/*char converterRusEng(char x){
if(x == ' '){
  return ' ';
}
else if(x == 'Ф'){
  return 'A';
}
else if(x == 'И'){
  return 'B';
}
else if(x == 'С'){
  return 'C';
}
else if(x == 'В'){
  return 'D';
}
else if(x == 'У'){
  return 'E';
}
else if(x == 'А'){
  return 'F';
}
else if(x == 'П'){
  return 'G';
}
else if(x == 'Р'){
  return 'H';
}
else if(x == 'Ш'){
  return 'I';
}
else if(x == 'О'){
  return 'J';
}
else if(x == 'Л'){
  return 'K';
}
else if(x == 'Д'){
  return 'L';
}
else if(x == 'Ь'){
  return 'M';
}
else if(x == 'Т'){
  return 'N';
}
else if(x == 'Щ'){
  return 'O';
}
else if(x == 'З'){
  return 'P';
}
else if(x == 'Й'){
  return 'Q';
}
else if(x == 'К'){
  return 'R';
}
else if(x == 'Ы'){
  return 'S';
}
else if(x == 'Е'){
  return 'T';
}
else if(x == 'Г'){
  return 'U';
}
else if(x == 'Ц'){
  return 'W';
}
else if(x == 'Ч'){
  return 'X';
}
else if(x == 'Н'){
  return 'Y';
}
else if(x == 'Я'){
  return 'Z';
}
else if(x == 'ф'){
  return 'a';
}
else if(x == 'и'){
  return 'b';
}
else if(x == 'с'){
  return 'c';
}
else if(x == 'в'){
  return 'd';
}
else if(x == 'у'){
  return 'e';
}
else if(x == 'а'){
  return 'f';
}
else if(x == 'п'){
  return 'g';
}
else if(x == 'р'){
  return 'h';
}
else if(x == 'ш'){
  return 'i';
}
else if(x == 'о'){
  return 'j';
}
else if(x == 'л'){
  return 'k';
}
else if(x == 'д'){
  return 'l';
}
else if(x == 'ь'){
  return 'm';
}
else if(x == 'т'){
  return 'n';
}
else if(x == 'щ'){
  return 'o';
}
else if(x == 'з'){
  return 'p';
}
else if(x == 'й'){
  return 'q';
}
else if(x == 'к'){
  return 'r';
}
else if(x == 'ы'){
  return 's';
}
else if(x == 'е'){
  return 't';
}
else if(x == 'г'){
  return 'u';
}
else if(x == 'ц'){
  return 'w';
}
else if(x == 'ч'){
  return 'x';
}
else if(x == 'н'){
  return 'y';
}
else if(x == 'я'){
  return 'z';
}
else if(x == 'М'){
  return 'V';
}
else if(x == 'м'){
  return 'v';
}
    
}
int main(){
  string sentence;
  cin.ignore();
  getline(cin,sentence);
  int length = sentence.length();
  cout << sentence;
  for (int i=0;i<length;i++){
    cout << converterRusEng(sentence[i]);
  }
  return 0;
}*/
/*#include <vector>
#include <iostream>

int reduceNum(vector<int> divisors){
    if(divisors.size() == 3){
        return divisors;
    }
    else{
        int prod = divisors[1] * divisors[2];
        divisors.push_back(prod);
        divisors.erase(divisors.begin() + 1);
        divisors.erase(divisors.begin() + 1);
    }
    return divisors;
}

int main(){
    vector<int> divisors;
    long long int num;
    cin >> num;
    int i = 1;
    while(num > 1){
        i ++;
        if(num % i == 0) {
            divisors.push_back(i);
            num /= i;
        }
    }

    divisors = reduceNum(divisors);
    cout << "Reduced divisors: ";
    for(int i=0; i<divisors.size(); i++){
        cout << divisors[i] << " ";
    }
    cout << endl;

    return 0;
}*/