#include<bits/stdc++.h>

class Solution {
public:
    int findComplement(int n) {
        int res=0;
        int i=0;

        if(n==0){
            res=1;
        }

        while(n){
            int x=n^1;
            x=x%2;
            int o=pow(2,i);

            res+=(x*o);

            i++;
            n=n>>1;

        }

        return res;
    }
};