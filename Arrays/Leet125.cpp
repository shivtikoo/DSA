class Solution {
public:
    bool isPalindrome(string s) {
        string v;

        int n =s.size();

        for(int i=0; i<n; i++){
            if(isalnum(s[i])){
                v.push_back(s[i]);
            }
        }

        for(int i=0; i<v.size();i++){
            if(v[i]>='A' && v[i]<='Z'){
                v[i]=v[i]-'A'+'a';
            }
        }

        int l=0;
        int h=v.size()-1;

        while(l<h){
            if(v[l++]!=v[h--]){
                return 0;
            }
        }

        return 1;
        
    }
};