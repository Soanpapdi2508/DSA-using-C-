#include <iostream>
using namespace std;


int main(){
    int sum = 0;
    int arr[]= {5,6,7,8,9,10};
    int n = sizeof(arr);
    for(int i = 0; i < 6; i++){
        sum = sum + arr[i];
    }

    cout << "Sum of Array is: " << sum;
    return 0;
}