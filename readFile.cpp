#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    ifstream readFile("primeNumber.txt");
    string line;

    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();
    
    return 0;
}