// #include <iostream>
// #include <sstream>
// #include <string>
// using namespace std;

// int main() {
//     string input1, input2;
//     getline(cin, input1);
//     getline(cin, input2);

//     istringstream iss1(input1);
//     istringstream iss2(input2);

//     int a, b;

//     if (input1.find(' ') != string::npos) {
//         // Numbers are given on the same line
//         iss1 >> a >> b;
//         cout << a + b << endl;
//     } else {
//         // Numbers are given on separate lines
//         iss1 >> a;
//         iss2 >> b;
//         cout << a * b << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string number1[3],number2 ="0";
    cout << endl;
    cin >> number2;

       if(number2 != "0"){
        cout << (number1[0]);
       }
       else{
        cout <<(number1[0])+(number1[2]);
       }
    
    return 0;
}
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