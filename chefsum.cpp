#include <bits/stdc++.h>

using namespace  std;

//int count=0;
long long int prefixSum(long long int i,long long int v[],long long int temp [])
{
	
	long long int sum=0;
	for (int j = 1; j <= i ; ++j)
	{
	//	cout << "yes "<<v[j]<<endl;
		sum+=v[j];
	}
	temp[i]=sum;
	//count=count+1;	
} 
long long int suffixSum(long long int i,long long int n,long long int v[],long long int temp [],long long int count)
{
	i = n-i+1 ;
	long long int fin_pos = n-i+1;
	//fin_pos = n-f

	long long int sum=0;
	for (int j = fin_pos; j <=n ; ++j)
	{
		//cout << v[j] << " ";
		sum+=v[j];
	}
	temp[count]+=sum;
	
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		//std::vector<long long int> v;
		//std::vector<long long int> temp;
		long long int v[100005];
		long long int temp[100005];
		long long int n;
		long long int count = 0;
		cin >> n;

		for (long long int i = 1; i <= n; ++i)
			{
				long long int a;
				cin >> a;
				v[i]=a;	
			}

		count = 1;
		long long int min = 1000005,pos=1;
		for (long long int i = 1; i <= n ; ++i)
		{
			prefixSum(i,v,temp);
			suffixSum(i,n,v,temp,count);
			++count;
			if (temp[i] < min)
			{
				min = temp[i];
				pos = i;
			}
		}
		//for (long long int i = n; i > 0; --i)
		//	{	

		//		suffixSum(i,n,v,temp,count);
		//		++count;
		//	}
		
		/*
		for (long long int i = 1; i <= n; ++i)
		{
				cout << temp[i] <<" ";
		}
		printf("\n");
		long long int min=temp[1];
		long long int pos=1 ;
		for (long long int i = 1; i <= n; ++i)
		{
			if (temp[i] < min)		
			{
				min = temp[i];
				pos=i;
			}
		}*/

		cout << pos << endl;
		

	}
}