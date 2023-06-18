#include<iostream> 
using namespace std;

void reverse(string &s, int i,int j){
    
    string ans;

    if(i>=j){
        return;
    }
    else{
        swap(s[i],s[j]);
        i++;
        j--;
        reverse(s,i,j);
    }

}

int main(){

    string s ="shivtikoo";
    int l=s.length();

    reverse(s,0,l-1);

    cout<<s;

   
}