class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int pdt=1;

        while(n){
            sum+=(n%10);
            pdt*=(n%10);

            n=n/10;
        }

        int result=(pdt-sum);
        return result;
    }

};