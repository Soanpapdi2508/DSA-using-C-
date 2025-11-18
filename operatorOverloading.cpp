#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double image;

public:
    Complex(double r = 0, double i = 0) : real(r), image(i) {}

    Complex operator-(const Complex& rightOperand){
        Complex resultObj;
        resultObj.real = real - rightOperand.real;
        resultObj.image = image - rightOperand.image;
        return resultObj;
    }
    Complex operator+(const Complex& rightOperand){
        Complex resultObj;
        resultObj.real = real + rightOperand.real;
        resultObj.image = image + rightOperand.image;
        return resultObj;
    }
    void display (){
        cout << real << " + " << image << "i" << endl;
    }
};

int main()
{
    Complex c1(5.4, 8.9);
    Complex c2(5.1, 8.4);
    Complex c4(1.0, 1.0);
    Complex c3;
    c3 = c1 - c2;
    c4 = c3 + c4;

    c3.display();
    c4.display();

    return 0;
}