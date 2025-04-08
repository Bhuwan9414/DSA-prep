// pointer basics 

#include<iostream>
using namespace std;

int main(){

    // int a = 10;
    // int *ptr = &a;

    // cout << a << endl;
    // cout << "value of a is " << *ptr << endl;
    // cout << "Address of a is " << ptr << endl; 


    int arr[10] = {1,2,3,4,5};

    // cout << arr << endl;
    // cout << arr[0] << endl;
    // cout << &arr << endl;
    // cout << &arr[0] << endl;

    cout << *arr << endl;
    cout << *arr + 1 << endl;

}