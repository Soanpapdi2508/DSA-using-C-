#include <iostream>
using namespace std;

int main()
{
    int num1, num2, result;
    cout << "Enter Num1: ";
    cin >> num1;
    cout << "Enter Num2: ";
    cin >> num2;

    try
    {
        if (num2 == 0)
        {
            throw "Arithmetic exeption as Number cannot be divided by 0\n";
        }
        result = num1 / num2;
        cout << "Here is your division: " << result << endl;
    }
    catch (const char *msg)
    {
        cerr << "Error caught:- " << msg << endl;
    }

    return 0;
}