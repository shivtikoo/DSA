class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int l,m,h;
        l=0;
        h=arr.size()-1;
        m=l+((h-l)/2);

        while(l<=h){
            if(arr[m]>arr[m-1] && arr[m]>arr[m+1]){
                return m;
            }
            else if(arr[m]>arr[m+1]){
                h=m-1;
            }
            else{
                l=m+1;
            }

            m=l+((h-l)/2);
        }
}
};

//Optimised

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int l,m,h;
        l=0;
        h=arr.size()-1;
        m=l+((h-l)/2);

        while(l<h){
            
            if(arr[m]>arr[m+1]){
                h=m;
            }
            else{
                l=m+1;
            }

            m=l+((h-l)/2);
        }

        return l;
        
    }
};