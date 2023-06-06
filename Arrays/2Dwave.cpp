#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{

    vector<int> x;
    for(int i=0; i<mCols;i++){
        if(i%2==0){
            for(int j=0;j<nRows;j++){
                x.push_back(arr[j][i]);  
            }
        }
        else{
            for(int j=nRows-1;j>=0;j--){
                x.push_back(arr[j][i]);
            }
        }
    }
    return x;
 
}