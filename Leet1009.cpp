#include<bits/stdc++.h>

class Solution {
public:
    int bitwiseComplement(int n) {
        int i=0;
        int x=0;

        if(n==0){
            x=1;
        }

        while(n){
            int z=(n^1);
            z=z%2;
            x+=(z*pow(2,i));

            n=n>>1;
            i++;

        }
        
        return x;

    }
};