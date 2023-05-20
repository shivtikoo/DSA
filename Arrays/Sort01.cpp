#include<bits/stdc++.h>
using namespace std;

void toPrint(int arr[], int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void toSort(int arr[], int size){
    int i=0;
    int j=(size-1);
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==1){
            j--;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;

    }
}

int main(){
    int arr[5]={1,0,0,0,1};

    toPrint(arr,5);

    toSort(arr,5);

    toPrint(arr,5);


}