// HAMROYEV MIRSHOD
// ID: U2310088
// SECTION 002
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
void sumMatrix(){
      int m;
    int n;
    cout << "Enter the nunmber rows for both arrays: "; cin >> n;
    cout << "Enter the number of columns for both arrays: ";  cin >> m;
    cout << "Enter the first matrix: \n"; 
    int array1[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           cin >> array1[i][j];
        }
    }

    int array2[n][m];
    cout << "Enter the second matrix: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           cin >> array1[i][j];
        }
    }
    int result[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            result[i][j] = array1[i][j] + array2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}
void productMatrix(){
    int m;
    int n;
    cout << "Enter the nunmber rows for both arrays: "; cin >> n;
    cout << "Enter the number of columns for both arrays: ";  cin >> m;
    cout << "Enter the first matrix: \n";  
    int array1[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           cin >> array1[i][j];
        }
    }

    int array2[n][m];
    cout << "Enter the second matrix: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           cin >> array1[i][j];
        }
    }
    int multiply[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
            multiply[i][j] = array1[i][j] * array2[i][j];
            cout << multiply[i][j] << " ";
            }
            cout <<endl;
        }
}
void transpose(){
    int m;
    int n;
    cout << "Enter the nunmber rows to transpose: "; cin >> n;
    cout << "Enter the number of columns to transpose: ";  cin >> m;
    cout << "Enter the matrix: \n"; 
    int array[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           cin >> array[i][j];
        }
    }
    cout << "Display transposed array:";
    for(int i = 0; i < n; i++){
        for (int j=0 ; j<m; j++) {
            cout<<array[j][i]<<" ";
            }
            cout<<endl;
            }
}
void read_and_display(){
    int m;
    int n;
    cout << "Enter the nunmber rows: "; cin >> n;
    cout << "Enter the number of columns: ";  cin >> m;
    int array[n][m];
    cout << "Enter the matrix: "; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m;j++){
           cin >> array[i][j];
        }
        cout << endl;
    }
    cout<<"The matrix is:"<<endl;
    cout <<"##########################"<<endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << array[i][j] << " ";
        }
            cout << endl;
    }
    cout <<"##########################"<<endl;
}

int main(){
    cout << "The code of read and display of 2D array: Number #1\nThe code of sum of 2D array: Number #2\nThe code of TRANSPOSE of 2D array: Number #3\nThe code of PRODUCT of 2D array: Number #4\n";
    cout << "The code of salesman problem: Number #5\n";
    int a ;
    cout << "Enter a number that represents the index of programm: ";
    cin >> a;
    switch (a)
    {
    case 1: read_and_display();
        break;
    case 2:sumMatrix();
        break;
    case 3:transpose();
        break;
    case 4:productMatrix();
        break;
    case 5:{
        int shop[5][3];
        cout << "Enter each items of the salesman: "; 
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 3; j++){
                cin >> shop[i][j];
            }
        }
        char choice;
        cout << "Do you want total sales by each salesman in this case ?\nIn this case, enter 'A' !\n If you want to get total sales of each item, enter 'B'!\n";
        cin >> choice;
        if(choice == 'A'){
           long int totalaSum = 0;
           for(int i = 0; i < 5; i++){
            for(int j = 0; j < 3; j++){
                totalaSum += shop[i][j];
            }
           }
           cout << "The total sum of all items is: " << totalaSum << endl;
        }
        else if(choice == 'B'){
            for(int i = 0; i < 3; i++){
                long int productbySum = 0;
                for(int j = 0; j < 5; j++){
                    productbySum += shop[j][i];
                }
                cout << "The total product of "<<i<<"-item is: " << productbySum << endl;
            }
        }
    }
        break;
    
    default:
     cout << "You had to enter 1 to 5 any number in this gap\n";
        break;
    }
 return 0;
}