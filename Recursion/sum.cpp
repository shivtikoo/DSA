#include<iostream>
using namespace std;

int summer(int *arr, int size){

    if(size==1){
        return arr[0];
    }
    
    return (arr[0]+summer(arr+1,size-1));
    
       
}
    


int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;

    int ans=0;
    ans=summer(arr,size);

    cout<<ans;
}