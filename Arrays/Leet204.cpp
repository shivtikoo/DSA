class Solution {
public:
    int countPrimes(int n) {

        vector<bool> ans(n+1,true);
        int cnt=0;

        ans[0]=ans[1]=0;

        for(int i=2;i<n;i++){
            
            if(ans[i]){
                cnt++;

                for(int j=2*i;j<n;j=j+i){
                    ans[j]=0;
                }
            }
        }
        return cnt;

    }
};