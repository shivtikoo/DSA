#include <bits/stdc++.h> 
void solve(string str, vector<string> &ans, int index, string output){
	if(index>=str.length()){
		if(output!=""){
			ans.push_back(output);
		}
		return;
		
	}

	solve(str, ans, index+1, output);

	char ele=str[index];
	output.push_back(ele);
	solve(str, ans, index+1, output );

}





vector<string> subsequences(string str){
	
	// Write your code here

	vector<string> ans;

	string output="";

	int index=0;

	solve(str,ans,index,output);

	return ans;
	
}
