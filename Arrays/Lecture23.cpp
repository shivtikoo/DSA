//Working with 2D arrays
#include <iostream>
using namespace std;

void printsum(int arr[][2],int m, int n){
    int maxi=0;
    for(int i=0; i<m;i++){
        int sum=0 ;
        for(int j=0; j<n;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
        }
    }
    cout<<maxi;
}

void printer(int arr[3][2]){
    for(int i=0; i<3;i++){
        for(int j=0; j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    int arr[3][2];


    cout<<"Enter the input: "<<endl;
    for(int i=0; i<3;i++){
        for(int j=0; j<2;j++){
            cin>>arr[i][j];
        }
    }

    printer(arr);

    ///row wise sum
    printsum(arr,3,2);


}