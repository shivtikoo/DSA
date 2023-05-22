#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(100);

    cout<<binary_search(v.begin(),v.end(),59);

    reverse(v.begin(),v.end());

    rotate(v.begin(),v.end());

    
}