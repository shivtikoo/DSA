#include<iostream>
using namespace std;

void toSwap(int arr[], int size){
    for(int i=0; i<size-1;i++){
        if(i%2==0){
            swap(arr[i],arr[i+1]);
        }  
    }
}

void toPrint(int arr[],int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[5]={1,2,3,4,5};

    cout<<"OIGINAL ARRAY: "<<endl;
    toPrint(arr,5);

    toSwap(arr, 5);

    cout<<"SWAPPED ARRAY: "<<endl;
    toPrint(arr,5);
}