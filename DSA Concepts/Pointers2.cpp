#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50};
    int *ptr = arr;

    // Print the address of first element or 0 index
    cout << arr << endl;
    cout << arr + 0 << endl;
    cout << &arr[0] << endl;
    cout << ptr << endl;
    
    // Print the address of first element or 0 index
    cout << arr + 1 << endl;
    cout << &arr[1] << endl;

    // Print the value of 0 index
    cout << arr[0] << endl;
    cout << *(arr + 0) << endl;
    cout << *arr << endl;
    cout << *ptr << endl;

    // Print all the address
    for(int i = 0; i < 5; i++)
    cout << arr + i << endl;

    // Print all the values
    for(int i = 0; i < 5; i++)
    cout << *(arr + i) << endl;
}