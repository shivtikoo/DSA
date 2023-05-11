#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;

    cout<<~a<<endl;

    //Right shift
    cout<<(17>>2)<<endl;

    //Left Shift
    cout<<(17<<2)<<endl;

    cout<<a++<<endl;
    cout<<++a;

    //FOR LOOP KE ANDAR KOI BHI ARGUMENT DAALNE KI KOI ZARURAT NAHI
    //HAR FOR LOOP KE ENDING MAI THE FLOW GOES LIKE THIS
        //PEHLE IT UPDATES THE I VALUE 
        //THEN CHECKS THE CONDITIONAL
        //THEN GOES INSIDE THE LOOP
    int count;
    cin>>count;
    int k=0;
    int z=++k;
    cout<<"Printing of first n nos. of the FIBONACCI series:"<<"0"<<" "<<z<<" "<<"1"<<",";

    for (int i = 0; i < count; i++)
    {
        int temp=k+z;
        k=z;
        z=temp;

        cout<<z<<" ";
    }
    

    //BREAK BRINGS YOU OUT OF THE LOOP


    //SCOPE OF A VARIABLE
    
    //a variable needs to be declared before being used!!

    //operator precednce ke liye use ()

    






}