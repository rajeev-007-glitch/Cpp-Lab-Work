#include <iostream>
using namespace std;
float addition(float, float);
float substraction(float, float);
float multiplication(float, float);
float division(float, float);
int main()
{
    float x, y;
    char op;
    cout << "\n enter the value of x : ";
    cin >> x;
    cout << "\n enter the value of y : ";
    cin >> y;
    cout << "Enter the Operator (+, -, *, /): ";
    cin >> op;
    if (op == '+')
        cout << endl
             << "Addition Result = " << addition(x, y);
    else if (op == '-')
        cout << endl
             << "Subtraction Result = " << substraction(x, y);
    else if (op == '*')
        cout << endl
             << "Multiplication Result = " << multiplication(x, y);
    else if (op == '/')
        cout << endl
             << "Division Result = " << division(x, y);
    else
        cout << endl
             << "Wrong Operator!";
    cout << endl;
    return 0;
}
float addition(float a, float b) { return a + b; }
float substraction(float a, float b) { return a - b; }
float multiplication(float a, float b) { return a * b; }
float division(float a, float b) { return a / b; }