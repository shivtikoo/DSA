class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool res=0;
        int count=0;


        while(n>0){
            
            if((n&1)==1 ){
                count++;
            }
            n=n>>1;
        }
        
        if(count==1){
            res=1;
        }

        return res;
        
    }
};