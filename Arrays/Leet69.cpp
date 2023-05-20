class Solution {
public:
    long long bs(int x){
        long long l=0;
        long long h=x;
        long long m=l+(h-l)/2;
        long long res;

        while(l<=h){
            long long sq=m*m;

            if(sq==x){
                return m;
            }

            else if(sq>x){
                h=m-1;
            }

            else{
                res=m;
                l=m+1;
            }
            m=l+(h-l)/2;

        }
        return res;
    }




    int mySqrt(int x) {

        //do binary search
        int res=bs(x);

        return res;
    }
    
};