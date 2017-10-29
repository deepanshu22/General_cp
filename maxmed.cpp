#include <stdio.h>
#include <iostream>
//#include <math.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int sz;
		scanf("%d",&sz);
		int sz1=sz;
		sz=2*sz;
		std::vector<int> vec;
		while(sz--)
		{
			int a;
			scanf("%d",&a);
			vec.push_back(a);
			//printf("2\n");
		}
		std::sort(vec.begin(),vec.end());

		int b[sz1+1];
		int j=1;
		//printf("%d\n",vec.size());
		for(int i=vec.size()-1;i>=sz1;i--)
		{
			b[j]=vec[i];
			//printf("%d\n",b[j]);
			j++;
		}
		sz1=sz1/2;
			printf("%d\n",b[sz1+1]);
		for(int i = 0 ;i< vec.size();i++)
		{
			printf("%d ",vec[i]);
		}
		printf("\n");	

	}	
}