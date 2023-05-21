//Insertion Sort
#include<iostream>
using namespace std;

void insert(int arr[], int n){

    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=i-1;j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
            else{
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[7]={2,3,4,5,7,1,1};

    insert(arr,7);
}