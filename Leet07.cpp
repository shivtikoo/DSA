class Solution {
public:
    int reverse(int x) {
        int res=0;
        int i=0;
        
        while(x){
            int dig=x%10;
            
            if(res>(INT_MAX/10)|res<(INT_MIN/10)){
                res=0;
                break;
            }

            res=(res*10)+dig;
            
            
            i++;
            x=x/10;

        }
        
        
        return res;

        
    }
};