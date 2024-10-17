#include <iostream>
#include <vector>
using namespace std;

template <typename M>
M calculateDegree( M x, M y){
    if( y == 0){
        return 1;
    }
      return x *  calculateDegree(x, y-1);
}
int sum( int a){
    if( a == 0)
     return 0;
    else
     return (a + sum(a-1));
}
vector<int> fibonacci(int n) {
    vector<int> fib_numbers;
    fib_numbers.push_back(0);
    fib_numbers.push_back(1);

   do {
        int new_number = fib_numbers[fib_numbers.size() - 1] + fib_numbers[fib_numbers.size() - 2];
        fib_numbers.push_back(new_number);
    } while (fib_numbers[fib_numbers.size()] < n);

    return fib_numbers;
}

void print_fibonacci(int n) {
    vector<int> fib_numbers = fibonacci(n);
    for (int num : fib_numbers) {
        cout << num << " "<<endl;
    }
}
int gcd( int x, int y){
    if(y==0)
       return x;
    return gcd(y,x%y);

}
int f(int x, int y){
    if( x >= y){
        return f( x - y, y) + 1;
    }
    else{
        return 0;
    }
}
int main() {
    int n;
    cout << "1 is the Code to run first program x power y\n";
    cout << "2 is the Code to run second program summation\n";
   cout << "3 is the Code to run third program fibonacci\n";
    cout << "4 is the Code to run first program gcd\n";
    cout << "5 is the Code to run first program F(x,y)\n";
    cout << "Enter the number to run one of the above programs: "; cin >> n;
do{
    switch (n) {
        case 1:
            cout<<"Enter base and exponent respectively: ";
            int a, b; cin>>a>>b;
            cout << calculateDegree(a,b)<<endl; break;
        case 2:
        long long int m;
            cout << "Enter till which number do you want to sum: "; cin >> m;
            cout <<  sum(m) <<endl; break;
        case 3:
        long long int k;
           cout << "Enter a number and you will get fibonacci numbers till it: ";cin >>k;
           print_fibonacci(k);break;
        case 4:
          long long int p;
          long long int n;
          cout << "Enter two numbers to acquire their GCD: \n"; cin >> p >> n;
         cout << gcd(p, n)<<endl; break;
        case 5:
        long long int x;
          long long int y;
          cout << "Enter number for F(x,y), x and y: "; cin >> x >>y;
          cout << f(x,y)<<endl; break;
        default:
            cout << "Please, enter code of the program properly (1-5)!!!";
             break;
    }
}while( n >= 1 && n <= 5);
return 0;
}


