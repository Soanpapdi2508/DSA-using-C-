#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int num)
{
    if (num < 0)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ofstream primeNumberFile("primeNumber.txt");
    int n;
    cout << "Enter till you want to see prime number: ";
    cin >> n;

    cout << "Prime number upto" << n << " your given number" << endl;
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            cout << i << " is prime number" << endl;
            primeNumberFile << i << " is prime number" << endl;
        }
    }

    primeNumberFile.close();

        return 0;
}