class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        //pattern dhoondo game khatam

        int r=matrix.size();
        int c=matrix[0].size();

        int i=0;
        int j=c-1;

        while(j>=0 && i<r){
            int ele=matrix[i][j];

            if(ele==target){
                return 1;
            }

            if(ele>target){
                j--;
            }

            else{
                i++;
            }
        }
        return 0;
        
    }
};