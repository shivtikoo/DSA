#include<iostream>
using namespace std;
//C & C++ concepts
int main(){
    //Arrays
    int arr[5];
    //If no value given for certain index then the default value is 0
    for (int i=0;i<5;i++){
        arr[i]=i+1;
        cout<<arr[i]<<endl;
    }
    //FOR EACH LOOP
    for (int x:arr){
        cout<<x<<endl;
    }
    cout<<sizeof(arr);
    //each int 4 bytes so 20
    cout<<"Enter size of arr:"<<endl;
    int n;
    cin>>n;
   
    int A[n];
    for(int x:A){
        cout<<x<<endl;
    }

    return 0;


}