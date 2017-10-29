#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <iterator>
#include <bits/stdc++.h>

using namespace std;

void count_occ(std::vector<int> v,int k,int sz)
{
	//map<int ,int> hm;
	//std::vector<int> v1;
	//typedef std::map< vector <int> , int  > hm;
	int count=0;
	int max=0;
	unordered_map<int ,int >hm;
	for (int  i = 0; i < k; ++i)
	{	
		//if(hm[v[i]]==0)
		
			int a = v[i];
			hm[a]+=1;
			
		
	}
	count=hm[1];
	//printf("%d\n",hm[1]);
	if(max < count)
	{
		max=count;
	}

	for (int i = k; i < sz ; ++i)
	{
		int a = v[i-k];
		hm[a]-=1;
		//printf("a and i %d %d\n",a,i);
		int b =v[i];
		hm[b]+=1;
		count = hm[b];
		if(max < count)
			max=count;
		
		
	
	}
		printf("%d\n",max);
}

int main()
{
	int sz;
	scanf("%d",&sz);
	std::vector<int> v;
	//int v[sz];
	for (int i = 0; i < sz; ++i)
	{
		int a;
		scanf("%d",&a);
		v.push_back(a);
	//	v[i]=a;
	}

	int k;
	scanf("%d",&k);
	count_occ(v,k,sz);

	
}