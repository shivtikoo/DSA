//BINARY SEARCH QUESTIONS
//first and last occurence

#include <bits/stdc++.h> 
int first(vector<int>& arr, int n, int k){
    int l, m,h;
    l=0;
    h=(n-1);
    m=l+((h-l)/2);

    int ans=-1;
    

    while(l<=h){
        if(arr[m]==k){
            ans=m;
            h=m-1;
        }
        else if(arr[m]>k){
            h=m-1;
        }
        else{
            l=m+1;
        }
        m=l+((h-l)/2);

    }

    return ans;


}
int last(vector<int>& arr, int n, int k){
    int l, m,h;
    l=0;
    h=(n-1);
    m=l+((h-l)/2);

    int ans=-1;
    

    while(l<=h){
        if(arr[m]==k){
            ans=m;
            l=m+1;
        }
        else if(arr[m]>k){
            h=m-1;
        }
        else{
            l=m+1;
        }
        m=l+((h-l)/2);

    }

    return ans;

}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int mini=first(arr,n,k);
    int maxi=last(arr,n,k);

    pair<int,int> s;
    s.first=mini;
    s.second=maxi;

    return s;
}
