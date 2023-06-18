// binary search using recursion

#include<iostream>
using namespace std;

bool sorted(int arr[], int size){
    if(size==1||size==0){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool ans=sorted(arr+1,size-1);
        return ans;
    }
}

int main(){
    // checking if sorted or not
    int arr[5]={1,2,3,4,1};
    int size=sizeof(arr);

    int ans=sorted(arr, size);
    cout<<ans;
}