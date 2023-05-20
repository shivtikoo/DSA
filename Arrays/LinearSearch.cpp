#include <iostream>
using namespace std;

bool isCheck(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int size = sizeof(arr);

    bool s = isCheck(arr, size);

    if (s)
    {
        cout << "1 is present in the array!!" << endl;
    }
    else
    {
        cout << "1 is not present in the array!!";
    }
}