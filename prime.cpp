#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Check if PRIME:"<<endl;
    cin>>n;
    int count=0;

    if(n==0){
        cout<<"ENTER VALID INPUT"<<endl;
    }

    for(int i =2 ; i < n; i++){
        if(n%i==0){
            cout<<"NOT PRIME"<<endl;
            break;
//AND AGAR CONTINUE USE KIA TOH CONTINUE KE NEECHE WALA PART 
//BECOMES UNREACHABLE BUT THE WHOLE OF LOOP IS EXECUTED NONE THE LESS
        }
        else{
            count++;
        }
    }

    if(count==(n-2)){
        cout<<"PRIME";
    }




}