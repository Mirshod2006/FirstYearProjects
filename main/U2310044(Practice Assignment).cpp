// Sunnat Akhmadov U2310044 CIE 23 05 Section 002
// All 7 projects are here 👇👇👇
#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;
struct Complex 
{
    float real;
    float imag;
};

string palindrome(string S) 
{
    for (int i = 0; i < S.length() / 2; i++) 
    {
        if (S[i] != S[S.length() - i - 1])
        {
            return "\nYour name is not a palindrome.";
        }
    }
    return "\nYour name is a palindrome.";
}

void reverse_word(char* str) 
{
    char* end = str;
    while (*end != '\0') 
    {
        end++;
    }
    end--;
    char* start = str;
    while (start < end) 
    {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

bool search_element(int* array, int rows, int cols, int target) 
{
    int* ptr = array;
    for (int i = 0; i < rows; ++i) 
    {
        for (int j = 0; j < cols; ++j) 
        {
            if (*ptr == target) 
            {
                return true;
            }
            ptr++;
        }
    }
    return false;
}

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

float calculateArea(float* base, float* height) 
{
    return 0.5 * (*base) * (*height);
}

void swap_numbers(int* num1, int* num2) 
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void findSmallest(const int* arr, int n, int& smallest, int& position) 
{
    smallest = *arr;
    position = 0;

    for (int i = 1; i < n; ++i) 
    {
        if (*(arr + i) < smallest) 
        {
            smallest = *(arr + i);
            position = i;
        }
    }
}

int main() {
    int choice;
    bool s = true;
    while (s)
    {
        cout << "\nProjects from LAB ASSIGNMENT WEEK 15 (Practice Assignment): \n";
        cout << "\nMenu: \n";
        cout << "\n1.Input 1 to check weather a given string is palindrome or not.\n";
        cout << "\n2.Input 2 to reverse a string.\n";
        cout << "\n3.Input 3 to search an element of a 2D array.\n";
        cout << "\n4.Input 4 to read and display, add and subtract two complex numbers.\n";
        cout << "\n5.Input 5 to calculate area of a triangle.\n";
        cout << "\n6.Input 6 to swap two numbers.\n";
        cout << "\n7.Input 7 to read and print an array of n numbers, then find out the smallest number and also print its position.\n";
        cout << "\nEnter any other number to exit.\n";
        cout << "\nEnter your choice from 1 to 7: ";
        cin >> choice;
        switch (choice) 
        {
            case 1: 
            {
                string name;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Input your name to check if it is a palindrome or not: ";
                cin >> name;
                cout << "\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << palindrome(name) << endl;
                cout << "-------------------------------------------------------" << endl;
                break;
            }

            case 2: 
            {
                const int maximum_size = 100;
                char input_word[maximum_size];
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Enter your word to reverse it: ";
                cin.ignore(); 
                cin.getline(input_word, maximum_size);
                reverse_word(input_word);
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Your reversed word is: " << input_word << endl;
                cout << "-------------------------------------------------------" << endl;
                break;
            }

            case 3: 
            {
                const int rows = 3;
                const int cols = 4;
                int array[rows][cols] = 
                {
                    {1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12}
                };

                int target;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Enter your element to search: ";
                cin >> target;
                if (search_element(&array[0][0], rows, cols, target)) 
                {
                    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                    cout << "Your element found in the array." << endl;
                    cout << "-------------------------------------------------------" << endl;
                } 
                else 
                {
                    cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                    cout << "Your element not found in the array." << endl;
                    cout << "-------------------------------------------------------" << endl;
                }
                break;
            }
            
            case 4: 
            {
                int choice;
                bool d = true;
                while (d)
                {
                Complex num1, num2, result;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Choose operation:\n";
                cout << "\nInput 1 to display and read." << endl; 
                cout << "\nInput 2 to add." << endl;
                cout << "\nInput 3 to subtract." << endl;
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
                        cout << "-------------------------------------------------------" << endl;
                        cout << "First Complex Number:" << endl;
                        displayComplex(num1);
                        cout << "-------------------------------------------------------" << endl;
                        cout << "Second Complex Number:" << endl;
                        displayComplex(num2);
                         cout << "-------------------------------------------------------" << endl;
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
            case 5: 
            {
                float base, height;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                float area = calculateArea(&base, &height);
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Area of the triangle: " << area << endl;
                cout << "-------------------------------------------------------" << endl;
                break;
            }
            case 6: 
            {
                int num1, num2;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "Before swapping:\n";
                cout << "First number: " << num1 << "\nSecond number: " << num2 << endl;
                cout << "-------------------------------------------------------" << endl;
                swap_numbers(&num1, &num2);
                cout << "After swapping:\n";
                cout << "First number: " << num1 << "\nSecond number: " << num2 << endl;
                cout << "-------------------------------------------------------" << endl;
                break;
            }
            case 7: 
            {
                const int max_elements = 100;
                int array[max_elements];
                int n;
                cout << "*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "\nEnter the number of elements in the array: ";
                cin >> n;
                cout << "\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "\nEnter the elements of the array:\n";
                cout << "\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                for (int i = 0; i < n; ++i) 
                {
                    cout << "\nElement " << i + 1 << ": ";
                    cin >> array[i];
                    cout << "\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                }
                int smallest, position;
                findSmallest(array, n, smallest, position);
                cout << "\nThe smallest number is: " << smallest << endl;
                cout << "\n*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*_*" << endl;
                cout << "\nIts position in the array is: " << position + 1 << endl;
                cout << "-------------------------------------------------------" << endl;
                break;
            }
            default:
            s = false;
                cout << "Exiting the program !!!" << endl;
                break;
        }
    }
    system("pause");
    return 0;
}
