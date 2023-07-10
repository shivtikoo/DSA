#include <bits/stdc++.h> 









void insert( stack<int> &s, int count, int n,int x){
    //base case
    if(count==n){
        s.push(x);
        return;
    }

    int old=s.top();
    s.pop();
    count++;
    insert(s,count,n,x);
    s.push(old);
}


stack<int> pushAtBottom(stack<int>& s, int x) 
{
    // Write your code here.




    //recursive call karke size ki
    int len=s.size();


    //found out the length
    int count=0;
    insert(s,count,len,x);

    return s;

}
