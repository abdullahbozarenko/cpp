#include <iostream>  // we need to import this program for printing
#include <string>    // for using strings in cpp
using namespace std; // for not writing std at the beginning of cout, string and endl

int sum(int a, int b)
{
    // sum math operation; return type is int; both arguments must be int
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int divide(int a, int b)
{
    return a / b;
}

int multiply(int a, int b)
{
    return a * b;
}

int main(int argc, char const *argv[])
{
    int a;
    int b;
    string operation;
    cout << "Please enter an operation: ";
    cin >> operation; // for input string. should pass variable where string will be stored
    cout << "Please first integer one: ";
    cin >> a;
    cout << "Please second integer one: ";
    cin >> b;
    // we call here sum function
    if (operation == "+")
        printf("Sum = %d. \n", sum(a, b));
    else if (operation == "-")
        printf("Subtract = %d. \n", subtract(a, b));
    else if (operation == "/")
        printf("Divide = %d. \n", divide(a, b));
    else if (operation == "*")
        printf("Multiply = %d. \n", multiply(a, b));
    return 0;
}

// ctrl+alt for multi-line editing
// ctrl+shift for highlighting

//1) git add <filename> or "." for all files
//2) git commit -m "write here your commit message"
//3) git push origin master