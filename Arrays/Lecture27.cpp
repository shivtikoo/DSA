// double pointers

// why * and not a separate thing
    // kya data type and kitne byte

//pointer ke liye pointer toh
//int * *ptr2=&ptr

#include<iostream>
using namespace std;

void update (int &n){
    n++;
}

int main(){
    int i=5;
    int *p=&i;
    //pass by value mai koi chnage nahi hota hai

    //passs by reference mai hcnage hoga
    cout<<i<<endl;
    update(i);
    cout<<i;

    int**x=&p;  


    int n;
    cin>>n;
    
    //array ka size should be known at run time

        //STACK KI MEMORY LAATA HAI AT COMPILE TIME

        //TOH HEAP KI MEMORY USE KARO

        new char; //dynamic allocation of mempory //USING DYNAMIC MEMORY ALOCATION

        int* arr=new int[n];

            //STATIC ALLOCATION MAI MMEMORY CLEANS UP KHUD JABKI DYNAMIC MAI NAHI HOTA KHUD SO 
            //HAVE TO USE DELETE KEYWORD

        delete [] arr; //SQUARE BRACKETS SE IT GETS TO KNO THAT ARRAY HAI
        
}