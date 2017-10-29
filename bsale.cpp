#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	int sz,m;

	cin >> sz >> m;
	int sz1=sz;
	std::vector<int> v;
	while(sz--)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	std::sort(v.begin(), v.end());
	int final_sum=0;
	for (int i = 0; i < m; ++i)
	{
		if(v[i]< 0)
		{
			v[i]*=(-1);
			final_sum+=v[i];
		}
		
	}
	printf("%d\n",final_sum);

}