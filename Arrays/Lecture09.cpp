#include <iostream>
using namespace std;

void adder(int arr[], int size)
{
    int result = 0;
    for (int i = 0; i < size; i++)
    {
        result += arr[i];
    }
    cout << "Result: " << result<<endl;;
}

void printer(int arr[], int size)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    // initialisation
    int arr[5] = {1, 2, 3, 4, 5};

    // sum function
    adder(arr, 5);

    // printing
    printer(arr, 5);
}