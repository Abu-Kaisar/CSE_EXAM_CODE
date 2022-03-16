#include<iostream>
using namespace std;


int main()
{
    char select;
    double a, b, res;
    cout << "'+' for Addition" << endl;
    cout << "'-' for Subtraction" << endl;
    cout << "'*' for Multiply" << endl;
    cout << "'/' for Division" << endl;

    cout << "\nEnter Your Choice: ";
    cin >> select;
    cout << "Enter the value of a:";
    cin >> a;
    cout << "Enter the value of b:";
    cin >> b;

    switch (select)
    {
    case '+':
        res = a + b;
        cout << "Addition: " << res;
        break;

    case '-':
        res = a - b;
        cout << "Subtraction: " << res;
        break;

    case '*':
        res = a * b;
        cout << "Multiply: " << res;
        break;

    case '/':
        res = a / b;
        cout << "Division: " << res;
        break;

    default:
        cout << "invalid choice....";
    }

    return 0;
}