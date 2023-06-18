#include<iostream>
using namespace std;

bool search(int arr[], int l,int h, int key){
    int m=l+(h-l)/2;

    if(l>h){
        return 0;
    }
    if(arr[m]==key){
        return 1;
    }

    if(arr[m]<key){
        l=m+1;
        return search(arr, l,h,key);

    }

    else{
        h=m-1;
        return search(arr,l,h,key);
    }
}

int main(){
    int arr[5]={1,2,3,5,6};
    int size=5;
    int key;
    cin>>key;
    int l=0;
    int h=size-1;

    bool x=search(arr,l,h,key);

    cout<<x;

}