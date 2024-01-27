// CODE MADE BY _sm0 ALL CREDIT GOES TO HIM
#include <iostream>
#include <Windows.h>

using namespace std;

void calculations() {

    // Variables

    char operation;
    double num1, num2;

    // Code

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2;
        break;

    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2;
        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2;
        break;

    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2;
        else
            cout << "Error! Division by zero.";
        break;

    default:
        cout << "Theres a error fix it NOW";
    }


}

int main()
{
	calculations();
	return 0;
	
}
