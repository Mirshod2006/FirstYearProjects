#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;

void checkPalidrom(string input){
    bool check = true;
    int n = input.size();
    for(int i = 0;i < n;i++){
         if(input[i] == input[n-1-i])
            check = true;
        else 
           check = false;
           break;
    }
    if(check)
    cout << "Yes!"<<endl;
    else
    cout <<"No!"<<endl;
}

bool search2DArray(int* arr,int n,int m,int x){
   int *pointer = arr;
    bool found = false;
    if(n == 0 && m == 0) return false;
    for(int i = 0; i < m;i++){
      for(int j = 0; j < n;j++){
          if( arr[i*n+j] == x){
            found = true;
            break;
        }
      }
    }
    return found;
}
struct Complex 
{
    float real;
    float imag;
};
void displayComplex(Complex num) 
{
    cout << "Complex Number: " << num.real << " + " << num.imag << "i" << endl;
}

Complex addComplex(Complex num1, Complex num2) 
{
    Complex result;
    result.real = num1.real + num2.real;
    result.imag = num1.imag + num2.imag;
    return result;
}

Complex subtractComplex(Complex num1, Complex num2) 
{
    Complex result;
    result.real = num1.real - num2.real;
    result.imag = num1.imag - num2.imag;
    return result;
}
double areaTriangle(double* a,double* b,double* c){
    double p = (*a + *b + *c) / 2.0;
    return sqrt(p * (p - *a) * (p - *b) * (p - *c));
}
void swap(int *n, int *m){
  int temp = *n;
  *n = *m;
  *m = temp;
}
int findSmallest(int *arr,int n){
    int smallest = arr[0];
    int index = 1;
    for(int i = 1;i < n;i++){
      if(arr[i] <= smallest){
         index = i+1;
      }
    }
    return index;
}
int main() {
  int choice;
  bool s = true;
    while (s)
    {
        cout << "\nMenu: \n";
        cout << "\n1.Enter 1 to check whether a given string is palindrome or not.\n";
        cout << "\n2.Enter 2 to reverse a string.\n";
        cout << "\n3.Enter 3 to search an element of a 2D array.\n";
        cout << "\n4.Enter 4 to read and display, add and subtract two complex numbers.\n";
        cout << "\n5.Enter 5 to calculate area of a triangle.\n";
        cout << "\n6.Enter 6 to swap two numbers.\n";
        cout << "\n7.Enter 7 to read and print an array of n numbers,\n then find out the smallest number and also print its position.\n";
        cout << "\nEnter any other number to exit.\n";
        cout << "\nEnter your choice from 1 to 7: ";
        cin >> choice;
    switch(choice){
      case 1:{
     string input;
     cout << "Enter a text to check whether pallidrom or not!: ";
     getline(cin,input);
     checkPalidrom(input); 
      break;
     }

     case 2:{
     int n,m,x;
     cout << "Enter the size of columns: ";cin >> n;
     cout << "Enter the size of rows: ";cin >> m;
     int arr[m][n];
      for(int i = 0 ; i < m; i++){
        for(int j = 0; j<n; j++){
          arr[i][j] = rand() % 1000;
          cout << arr[i][j]<<" ";
        }
        cout << endl;
     }
     cout <<" Enter the number to look for: ";cin >> x;
     if(search2DArray(&arr[0][0],n,m,x)){
         cout << "YES";
     }else{
         cout << "NO";
     }
     break;
     }
    
    case 3:{
        double a ,b ,c;
     cout << "Enter the first side of triange: ";cin >> a;
     cout << "Enter the second side of triange: ";cin >> b;
     cout << "Enter the third side of triange: ";cin >> c;
     double pattern = areaTriangle(&a,&b,&c);
     cout << "The area of the triangle is: " << pattern << endl;
    break;
    }
    
    case 4: 
            {
                int choice;
                bool d = true;
                while (true)
                {
                Complex num1, num2, result;
                cout << "Choose operation:\n";
                cout << "\nEnter 1 to display and read." << endl; 
                cout << "\nEnter 2 to add." << endl;
                cout << "\nEnter 3 to subtract." << endl;
                cout << "\nEnter any other number to exit.";
                cout << "\nEnter your choice: " << endl;
                cin >> choice;
                cout << "Enter the real and imaginary parts of the first complex number:" << endl;
                cin >> num1.real >> num1.imag;

                cout << "Enter the real and imaginary parts of the second complex number:" << endl;
                cin >> num2.real >> num2.imag;
                
                switch (choice) 
                {
                    case 1:
                        cout << "First Complex Number:" << endl;
                        displayComplex(num1);
                        cout << "Second Complex Number:" << endl;
                        displayComplex(num2);
                        break;

                    case 2:
                        result = addComplex(num1, num2);
                        cout << "Sum of the two complex numbers:" << endl;
                        displayComplex(result);
                        break;

                    case 3:
                        result = subtractComplex(num1, num2);
                        cout << "Difference of the two complex numbers:" << endl;
                        displayComplex(result);
                        break;
                    default:
                        cout << "Invalid choice!" << endl;
                }
                break;
            }
            d = false;
            break;
                }

    case 5:{
    int n,m;
    cout << "Enter two numbers to swap: \n";
    cout << "Enter the first one: ";cin >> n;
    cout << "Enter the second one: ";cin >> m;
    swap(&n,&m);
    cout << "The swapped numbers are: " << n << " " << m <<endl;
    break;
    }

    case 6:{
    int n;
    cout << "Enter the size of array: ";cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
     cin >> arr[i];
    }
    cout <<"This is the index of smallest number in the array: "<< findSmallest(arr,n)<<endl;
    }
    
    default:
            s = false;
                cout << "Exiting the program !!!" << endl;
                break;
         }
    }

     return 0;
}