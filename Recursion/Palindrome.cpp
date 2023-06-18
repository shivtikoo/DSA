#include<iostream>
using namespace std;

int pali(string s, int l, int h){

    if(l>=h){
        return 1;
    }
    if(s[l]!=s[h]){
        return 0;
    }
    else{
        l++;
        h--;
        return pali(s,l,h);
    }
}

int main(){

    string s;
    cin>>s;

    int l=s.length();

    int h=l-1;
    l=0;

    bool x=pali(s,l,h);

    cout<<x;

}