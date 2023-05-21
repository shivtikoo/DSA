//Bubble Sort
#include<iostream>
using namespace std;

void bubbly(int arr[], int n){
    int x=0;
    while(x<n-1){
        for(int i=0; i<n-x;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        x++;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[7]={9,8,3,4,2,4,5};

    bubbly(arr,7);

    return 0;
}
