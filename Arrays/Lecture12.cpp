#include <iostream>
using namespace std;

int BinarySearch(int arr[],int size, int key){

    int low, mid, high;
    low = 0;
    high = size-1;

    mid=(low+high)/2;

    while (low <= high)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            high = mid-1;
        }
        else  
        {
            low = mid+1;   
        }

        mid = (low + high) / 2;
    }
    return -1;
}

int main()
{
    int arr[7] = {1, 12, 14, 16, 19, 23, 34};
    cout<<"Input the key: "<<endl;
    int key;
    cin>>key;

    int index;
    index=BinarySearch(arr,7,key);
    cout<<"INDEX of the KEY: "<<index<<endl;

}