#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

void shift(std::vector<int> &vec,int n)
{	/*
	int i = 0;
	for(i=0;i<vec.size();++i)
	{	
		if(i != vec.size()-1)
			 arr[i+1] = vec[i] ;
		else
		{
			arr[0]=vec[i] ;
		}
	}
	for(i=0;i<vec.size();i++)
	{
		vec[i] = arr[i];
	}
	*/
	int temp = vec[n-1];
	for(int i = n-1;i > 0; i--)
	{
		vec[i] = vec[i-1];
	}

	vec[0] = temp;
	/*
	for(int i = 0;i < n;i++)
	{
		printf("%d",vec[i]);
	}
	printf("\n");
	*/
}
bool equal_1(int value);
void maximal(std::vector<int> &arr,int K,int N1)
{
	int count=0;
	int maxi=0;
	int i=0;
	int N2=N1;
	while(1)
	{
		count=0;
		
		//int k=k+i;
		for(int j = i ; j < (K+i);j++)
		{
			//printf("%d ", arr[j]);
			if(j == N2)
			{
				break;
			}

			if(arr[j] == 1)
			{
				count++;
				//printf("%d\n",count);
			}
		}
		//printf("\n");

		if(count > maxi)
		{
			maxi = count;
		}
		if( (K+i)>N1)
		{
			break;
		}

		//printf("value of k is %d\n",k);
		
		i++;
		//printf("i is %d\n",i);
	}
	//return maxi;
	/*i = 0;
	while(N2--)
	{	

		if((K+i)>N1)
			break;
	 int res = std::count_if(arr.begin()+i,arr.begin()+K+i,equal_1);
	if(res > maxi)
		maxi = res;
	
	i++;

	}*/
	printf("%d\n",maxi);
}
bool equal_1(int value)
{
	return value == 1;
}
int max_no=0;
void subarr(std::vector<int> &v,int N1,int arr[],int K,int i ,int j)
{
	int count=0;

	if(j==K)
	{
		count=0;
		int p;
		for(p = 0;p < K;p++)
		{
			printf("%d ",arr[p] );
			if(arr[p]==1)
			{
				count++;
			}
		}
		printf("\n");

		if(count > max_no)
		{
			max_no=count;
		}
	}
	else
	{
		if(i < N1 )
		{
			arr[j] = v[i];

			subarr(v,N1,arr,K,i+1,j+1);
			subarr(v,N1,arr,K,i+1,j);
		}
	}
}
void count_occ(std::vector<int> v,int k,int sz)
{
	//map<int ,int> hm;
	//std::vector<int> v1;
	//typedef std::map< vector <int> , int  > hm;
	int count=0;
	int max=0;
	unordered_map<int ,int > hm;
	for (int  i = 0; i < k; ++i)
	{	
		//if(hm[v[i]]==0)
		
			//int a = v[i];
			hm[v[i]]+=1;
			
	}
	count=hm[1];
	//printf("%d\n",hm[1]);
	if(max <= count)
	{
		max=count;
	}
	for (int i = k; i <= sz ; ++i)
	{
		//hm[v[i-k]] -= 1;
		//printf("a and i %d %d\n",a,i);
		//int b =v[i];
		hm[v[i]] += 1;
		int count1;
		count1 = hm[1];
		if(max <= count1)
			max=count1;
	}

	printf("%d\n",max);
}
int main()
{
	int N,K,P;
	scanf("%d%d%d",&N,&K,&P);
	int N1=N;
	int P1=P;
	std::vector<int> vec;
	//std::vector<char> v1;
	char arr[100005];
	//std::vector<char> v;
	while(N--)
	{
		int a;
		scanf("%d",&a);
		vec.push_back(a);
	}
	int i=0;

	//int temp[N1];		
	scanf("%s",arr);	
	int ones=0;
	for(int i = 0; i < P;i++)
	{
		//ones=0;
		if(arr[i] == '?')
		{	
			//ones=maximal(vec,K,N1);
			//printf("%d\n", ones);
			//subarr(vec,N1,temp,K,0,0);
			//printf("\n%d\n",max_no);
			if(N1 < 1001 && P < 1001)
			{
				maximal(vec,K,N1);
			}
			else
			{
			count_occ(vec,K,N1);
				//printf("yes");
			}			
		}
		else
		{
			//printf("booyah\n");
			shift(vec,N1);
			//for(int i = 0 ; i < N1 ;i++)
			//{
			//	printf("%d ",temp[i]);
			//}
			//printf("\n");

		}
	}


}