#include<bits/stdc++.h>
using namespace std;

void Selection(int arr[], int n){

    for(int i=0; i<n-1;i++){
        int min=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }  
        }
    }
    
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    //Selection Sort
    int arr[6]={9,8,7,5,3,2};
    Selection(arr,6);


}
