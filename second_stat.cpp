#include <stdio.h>
#include <iostream>
//#include <math.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

vector<int> myfunc(vector<int>&vec,int nw)
{
			
	//printf("hoorah\n");
	int i=1,count=0;
	int k=i-1;
	for(i=1;i<nw;i++)
	{
		if(vec[k]==vec[i])
		{
			count++;
		}
		else if(count > 0 && vec[k]!= vec[i])
		{	
			int j=0;
			for(j=0;j<count;j++)
				vec.erase(vec.begin());
			count=0;
		}
	}
	printf("%d\n",vec[1]);
	/*for (int i = 0; i < nw-1; ++i)
	{
		 
		printf("%d ",vec[i]);
	}
	*/
	return vec;
	
}

int main()
{

	int n;
	scanf("%d",&n);
	int nw=n;
	std::vector<int> vec;
	//int arr[105];
	int i;
	while(n--)
	{
		int a=0;
		scanf("%d",&a);
		vec.push_back(a);
		i++;

	}
	std::sort(vec.begin(),vec.end());
	i=1;
	int j=i-1;
	int flag=0;
	for (int i = 1; i < nw; i++)
	{
	
		if(vec[j] == vec[i])
		{
			flag++;
		}
	}
	//printf("flag %d\n", flag);
	
	if(nw > 1 && nw !=flag+1)
	{	

	myfunc(vec,nw);
	}
	else
	{
		printf("NO\n");
	}
		return 0;

}