#include <iostream>
#include <string>
using namespace std;

class Train
{
private:
    int trainNo;
    string trainName;
    string source;
    string destination;
    string journeyDate;
    int capacity;

public:
    // Initialize member function
    Train() : trainNo(0), trainName(""), source(""), destination(""), journeyDate(""), capacity(0) {};

    // 
    void inputTrainData(){
        cout << "Enter Your Train Number:";
        cin >> trainNo;
        cin.ignore();
        cout << "Enter Your Train Name: ";
        getline(cin, trainName);
        cout << "Enter your Source";
        getline(cin, source);
        cout << "Enter Your Destination";
        getline(cin, destination);
        cout << "Enter your Journey Date in (DD-MM-YYYY)";
        getline(cin, journeyDate);
        cout << "Enter Your Train Capacity" << endl;
        cin >> capacity;
    }

    void displayTrainDetails (){
        cout << "!---Train Details---!" << endl;
        cout << "Train Number is: " << trainNo << endl;
        cout << "Train Name is: " << trainName << endl;
        cout << "Train is arriving from: " << source << endl;
        cout << "Train's destination is: " << destination << endl;
        cout << "Train's Journey date is: " << journeyDate << endl;
        cout << "Capacity of Train is: " << capacity << endl;
    }
};

int main(){
    Train t1;
    t1.inputTrainData();
    t1.displayTrainDetails();
}