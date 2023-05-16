#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input total amount:"<<endl;
    cin>>n;

    int x=1;
    int s=0;

    switch(x){
        case 1:
        {
            s=n/100;
            n=n-(s*100);
            cout<<s<<" 100 denomination notes "<<endl;    
        }
        case 2:
        {
            s=n/50;
            n=n-(s*50);
            cout<<s<<" 50 denomination notes "<<endl;
        }
        case 3:
        {
            s=n/20;
            n=n-(s*20);
            cout<<s<<" 20 denomination notes "<<endl;
        }
        case 4:
        {
            s=n/10;
            n=n-(s*10);
            cout<<s<<" 10 denomination notes "<<endl;
        }
        case 5:
        {
            cout<<"Remainder of TotalAmount:"<<n<<endl;
        }
       
    }
}