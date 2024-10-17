#include <iostream>
#include <vector>
using namespace std;
int factorial(int n,int x) {
    unsigned long long int result = 1;
    for (int i = x; i <= n; i++) {
        result *= i;
    }
    return result;
}
int sum_of_digits(int number) {
    int sum = 0;
    std::char str_number = to_string(number);
    for (char c : str_number) {
        sum += c - '0';
    }
    return sum;
}
int main() {
   long long int number, num;
    std::cin >> number >> num;

    int factorial_result = factorial(number,num);
    int sum_of_digits_result = sum_of_digits(factorial_result);

    
    std::cout <<  sum_of_digits_result << std::endl;
     std::cout <<  factorial_result << std::endl;

    return 0;
}

/*int main(){
    long long int n, i;
    cin >> n >> i;
    int c = 0;
    if( n >= 0 && n <= 10e9 &&  i >= 0 && i <= 10e9){
    for(int j = n;j <= i; j++){

       while( j % 5 == 0){
          j /=5;
            c ++;
        }
     }
     cout << c;
    }
    return 0;
}*/