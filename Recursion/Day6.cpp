#include<iostream>
using namespace std;

int part(int *arr, int s, int e){

    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[s]){
            count++;
        }
    }

    swap(arr[s], arr[s+count]);

    int pivot=s+count;


    while(s<pivot && e>pivot){
        if(arr[s]<arr[pivot]){
            s++;
        }
        if(arr[e]>arr[pivot]){
            e--;
        }

        if(arr[s]<arr[s+count]&& arr[e]>arr[s+count]){
            swap(arr[s++],arr[e--]);
        }
    }
    return s;


}


void quick(int *arr, int s, int e){
    if(s>=e){
        return;
    }

    int p=part(arr, s,e);

    quick(arr,s,p-1);

    quick(arr,p+1,e);

}

int main(){
    int arr[5]={1,3,2,5,4};

    for(int i=0; i<5;i++){
        cout<<arr[i]<<',';
    }

    //quick sort
    //merge sort ka thoda ulta hota hai


    // partition karo 
    //pehle place an element at a place that makes all elements on its left smaller
    //elements on right greater

    int size=5;

    quick(arr,0,4);

    for(int i=0; i<size;i++){
        cout<<arr[i]<<',';
    }


}