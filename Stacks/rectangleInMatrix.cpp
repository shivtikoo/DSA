//MY APPROACH
#include<stack>
vector<int> ne(vector<int> arr, int m){

	vector<int> ans;
	stack<int> s;
	s.push(-1);

	for(int i=m-1;i>=0;i--){
		while(s.top()!=-1 && arr[s.top()]>=arr[i]){
			s.pop();
		}

		ans[i]=s.top();
		s.push(i);
	}

}

vector<int> pr(vector<int> arr, int m){

	vector<int> ans;
	stack<int> s;
	s.push(-1);

	for(int i=0;i<m;i++){
		while(s.top()!=-1 && arr[s.top()]>=arr[i]){
			s.pop();
		}

		ans[i]=s.top();
		s.push(i);
	}
	
}

int maximalAreaOfSubMatrixOfAll1(vector<vector<int>> &mat, int n, int m){
	
	// Write your code here.
	vector<int> next(m);
	vector<int> prev(m);

	int area=0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i>=1){
				if(mat[i][j]!=0){
					mat[i][j]+=mat[i-1][j];

				}
				
			}
		}
	}

	for(int i=0;i<n;i++){
		vector<int> arr=mat[i];
		next=ne(arr,m);
		prev=pr(arr,m);

		for(int j=0; j<m;j++){
			int l=mat[i][j];
			if(next[j]==-1){
				next[j]=m;
			}
			int b=next[j]-prev[j]-1;

			int newArea=l*b;

			area=max(area,newArea);

		}
	}

	return area;

}