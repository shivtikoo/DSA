#include <bits/stdc++.h>
void insert(stack<int> &s, int x){
	

	if(s.empty() || s.top()<x){
		s.push(x);
		return;
	}

	int c=s.top();
	s.pop();


	insert(s,x);
	
	s.push(c);

}

void sortStack(stack<int> &s)
{
	// Write your code here
	//sab pop karo n then sorted way mai keep pushing

	//sorted insert kaise karna hai?
	//keep popping everything and push when usse bada element mil jaaye

	if(s.empty()){
		return;
	}

	int x=s.top();
	s.pop();
	sortStack(s);
	insert(s,x);
}