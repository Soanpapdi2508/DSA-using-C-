#include <iostream>
using namespace std;

void swap(int *ptrA, int *ptrB)
{
    cout << "Performing swap " << endl;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
    cout << "Swap Done --> results below" << endl;
}

int main()
{
    int num1, num2;
    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;
    cout << "Before Swap " << endl;

    cout << "Pointer A: " << num1 << endl;
    cout << "Pointer B: " << num2 << endl;
    swap(&num1, &num2);
    cout << "After Swap " << endl;

    cout << "Pointer A: " << num1 << endl;
    cout << "Pointer B: " << num2 << endl;
    return 0;
}