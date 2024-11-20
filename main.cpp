#include <iostream>
using namespace std;

int main()
{
    int option = 0;
    float num1 = 0, num2 = 0, result = 0;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Choose operation: \n[1] addition, \n[2] subtraction, \n[3] multiplication, \n[4] division: ";
    cin >> option;

    if (option == 1) // addition
    {
        result = num1 + num2;
    }
    else if (option == 2)
    {
        result = num1 - num2;
    }
    else if (option == 3)
    {
        result = num1 * num2;
    }
    else if (option == 4)
    {
        result = num1 / num2;
    }

    cout << "Result is: " << result << endl;


    return 0;
}
