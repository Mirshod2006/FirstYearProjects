#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
// int main(){
//      long double n, a, b;
//     cin >> n >> a >> b;
//     if(a >= 0 && a <= 100 && b >= 0 && b <= 100 && n >= 1 && n <= 10e18){
//         cout << setprecision(5) << fixed << ((n - (a/100)*n)/(1 - (b/100)));
//     }
//     return 0;
// }

// int main(){
//     string polidrom;
//     cin >> polidrom;
//     int x =10 * (polidrom[0]-48)+(polidrom[1]-48);
//     int y = 10 * (polidrom[3]-48) + (polidrom[4]-48);
//     int z = 10 * (polidrom[1]-48)+(polidrom[0]-48); 
//     int a = abs(60 + ((polidrom[1]-48+1)*10+(polidrom[0]-48))-y);
//     int b = abs(60 - ((polidrom[1]-48-1)*10+(polidrom[0]-48))+y);
//     int c = abs(((polidrom[1]-48)*10+(polidrom[0]-48))-y); 
    
 
      
    
//       if((polidrom[1]-48) <= 9 && (polidrom[1]-48) > 5){
//        if(polidrom[1]-48 == 7 && polidrom[3]-48 >= 2){
//         if(polidrom[4] -48 >= 7 && polidrom[3] -48 == 2)
//             cout <<polidrom[0]-48+1<<0<<':'<<0<<polidrom[0]-48+1;
//         else if(polidrom[4] -48 <= 7 && polidrom[3] -48 == 2)
//             cout <<polidrom[0]-48<<5<<':'<<5<<polidrom[0]-48;
//         else
//             cout <<polidrom[0]-48+1<<0<<':'<<0<<polidrom[0]-48+1;
//        }
//        else if( polidrom[1] >= 8)
//             cout <<polidrom[0]-48+1<<0<<':'<<0<<polidrom[0]-48+1;
//        else{
//         cout <<polidrom[0]-48<<5<<':'<<5<<polidrom[0]-48;
//        }
//     }
//     else{
//            if(polidrom[0] == polidrom[4] && polidrom[1] == polidrom[3]){
//                 cout <<polidrom[0]-48<<polidrom[1]-48+1<<":"<<polidrom[3]-48+1<<polidrom[4];
//             }
//         else if(a >= b && b <= c){
//             cout << setfill('0');
//             cout <<setw(2)<< 10 * (polidrom[0]-48)+(polidrom[1]-48-1)<<":"<< 10 * (polidrom[1]-48-1)+(polidrom[0]-48);
//         }
//         else if(a >= b && c <= b ){
//             cout << setw(2)<<setfill('0')<< x<<":"<< setw(2)<<setfill('0') << z;
//         }
//         else if(b >= a && a <= c){
//             cout << setfill('0');
//             cout <<setw(2)<< 10 * (polidrom[0]-48)+(polidrom[1]-48+1)<<":"<<setw(2)<< 10 * (polidrom[1]-48+1)+(polidrom[0]-48);
//         }
//     }
//     return 0;