#include<iostream>
using namespace std;

void doReverse(int arr[], int size){
    int s=0;
    int e=(size-1);
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void toPrint(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr);
    
    cout<<"The Original Array: ";
    toPrint(arr,5);

    doReverse(arr, 5);

    cout<<"Reversed Array: ";
    toPrint(arr,5);


}
