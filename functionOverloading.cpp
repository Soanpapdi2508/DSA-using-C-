#include <iostream>
using namespace std;

void area(double radius){
 cout << "Area of Circle is:" << 3.14*radius*radius << endl;
}
void area(double base, double height, char type){
     cout << "Area of Triangle is:" << 0.5*base*height  << endl;

}
void area(double length, double breadth){
    cout << "Area of Rectange is:" << length*breadth  << endl;
}


int main (){
    area(7);
    area(3,7);
    area(5,7,'T');
    return 0;
}