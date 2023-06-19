//merge sort

#include<iostream>
using namespace std;

void sort(int *arr, int l, int h){
    int r=l+(h-l)/2;

    int l1=r-l+1;

    int l2=h-r;

    int * first= new int[l1];
    int * second=new int[l2];

    int m=l;

    for(int i=0; i<l1;i++){
        first[i]=arr[m++];
    }

    for(int i=0;i<l2;i++){
        second[i]=arr[m++];
    }

    int index1=0;
    int index2=0;

    m=l;

       while(index1 < l1 && index2 < l2) {
        if(first[index1] < second[index2]) {
            arr[m++] = first[index1++];
        }
        else{
            arr[m++] = second[index2++];
        }
    }   

    while(index1 < l1) {
        arr[m++] = first[index1++];
    }

    while(index2 < l2 ) {
        arr[m++] = second[index2++];
    }

    delete []first;
    delete []second;
}

void merger(int *arr, int l, int h){
    if(l>=h){
        return;
    }

    int m = l+(h-l)/2;

    merger(arr, m+1,h);

    merger(arr,l,m-1);

    sort(arr,l,h);
}

int main(){
    //pehle break the array into single cells fer start working
    //merge it together

    // MERGE SORT FASTESTTT

    //2 APPROACHES
    //APPROACH 01
        //CREATE NEW TWO ARRAYS N COPY VALUE

    //APPROACH 02
        //USE INDICES

    int arr[5]={9,7,5,8,1};
    int size=5;

    merger(arr,0,size-1);

    for(int i=0; i<size;i++){
        cout<<arr[i]<<',';
    }

    




}