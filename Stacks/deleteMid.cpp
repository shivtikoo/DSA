#include <bits/stdc++.h> 
void solve( stack<int> &s, int count, int size){
   //base case
   if(count==size/2){
      s.pop();
      return;
   }
   else{
      count++;
      int x=s.top();
      s.pop();
      solve(s,count,size);
      s.push(x);
      }
   }
}


void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
   int size=N;
   int count=0;

   solve(inputStack,count, size);



   
}