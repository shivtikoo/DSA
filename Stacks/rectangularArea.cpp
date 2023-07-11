 #include<bits/stdc++.h>
 int largestRectangle(vector < int > & heights) {
   // Write your code here.
   int n=heights.size();
   vector<int> rightSmaller(n,0),leftSmaller(n,0);
   stack<int> st;

   // right smallers
   for(int i=n-1;i>=0;i--){
     if(st.empty()){
       rightSmaller[i]=n-1;
       st.push(i);
     }
     else if(heights[st.top()]<heights[i]){
       rightSmaller[i]=st.top()-1;
       st.push(i);
     }
     else {
       while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();

       if(st.empty()){
         rightSmaller[i]=n-1;
         st.push(i);
       }
       else {
         rightSmaller[i]=st.top()-1;
         st.push(i);
       }
     }
   }

  
   // empty stack so that we can use it again
   while(!st.empty()) st.pop();


   // left smallers
   for(int i=0;i<n;i++){
     if(st.empty()){
       leftSmaller[i]=0;
       st.push(i);
     }
     else if(heights[st.top()]<heights[i]){
       leftSmaller[i]=st.top()+1;
       st.push(i);
     }
     else {
       while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();

       if(st.empty()){
         leftSmaller[i]=0;
         st.push(i);
       }
       else {
         leftSmaller[i]=st.top()+1;
         st.push(i);
       }
     }
   }

  int maxi=0;
  for(int i=0;i<n;i++){
    int area=heights[i]*(rightSmaller[i]-leftSmaller[i]+1);
    maxi=max(maxi,area);
  }
  return maxi;
 }