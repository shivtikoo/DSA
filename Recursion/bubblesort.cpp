#include<iostream>
using namespace std;

void bubbly(int *arr, int size){
    if(size==1){
        return;
    }

    for(int i=1;i<size;i++)
    if(arr[i-1]>arr[i]){
        swap(arr[i],arr[i-1]);
    }

    bubbly(arr,size-1);

}

int main(){

    int arr[5]={4,3,21,2,1};
    int size=5;

    bubbly(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<',';
    }
}