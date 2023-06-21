#include<bits/stdc++.h>
using namespace std;
// SELF TRIAL
//BAD APPROACH WILL HAVE TO MAKE A MAP TOO TO CHECK IF IT HAS ALREADY BEEN INCLUDED IN THE OUTPUT


void solve(string s, string output, vector<string> &ans, int size, int index){
    if(index>=size){
        ans.push_back(output);
        return;
    }

    for(int i=0; i<size;i++){
        output.push_back(s[i]);
        solve(s,output,ans,size,index+1 );
        output.pop_back();
    }

}


int main(){
    //permutations of a string

    string s="shivtikoo";

    //APPROACH

    string output;
    int size=s.length();
    vector <string> ans;
    int index=0;

    solve(s, output, ans, size, index);

    for(int i=0; i<ans.size();i++){
        cout<<ans[i];
    }

}
