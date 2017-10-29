#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
	stack<int> s;
	stack<int>out;
	for (int i = 1; i <= 5; ++i)
	{
		s.push(i);
		//cout<<i<<endl;
	}
	int sz = s.size();
	
	swap(s,out);
	int out_sz = out.size();
	//cout << out_sz<<endl;
	for (int i = 0; i < out_sz; ++i)
	{
		int a = out.top();
		cout<<a<<endl;
		s.push(a);
		out.pop();
	}
	printf("\n");
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}

}