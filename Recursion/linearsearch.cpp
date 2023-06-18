#include<iostream>
using namespace std;

bool search (int arr[], int size , int key){
    if(size==0){
        return 0;
    }
    if(arr[0]==key){
        return 1;
    }
    else{
        return search(arr+1, size-1, key);    
    }
}

int main(){

    int arr[]={3,5,1,2,6};
    int size=5;
    int key;
    cin>>key;

    bool ans=search(arr, size ,key);

    cout<<ans;


    return 0;
}