#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#define m 1000000007LL;
using namespace std;
long long int final_sum=0;

void fxyz(long long int y,std::vector<long long int> &vpp,std::vector<long long int> vrr,long long int countp,long long int countr)
{
	for (long long int i = 0; i < countp; ++i)
	{
		for (long long int j = 0; j < countr; ++j)
		{
			final_sum+=(vpp[i]+y)*(y+vrr[j]);
		}
	}

}
void checker(long long int a,std::vector<long long int> &vp,std::vector<long long int> &vr,long long int p,long long int r)
{			
			std::vector<long long int> vpp;
			std::vector<long long int> vrr;
			long long int countp=0,countr=0;
			for (long long int i = 0; i < p ; ++i)
			{
				if(a >= vp[i])
				{	
					vpp.push_back(vp[i]);
					countp++;

				}

			}
			for (long long int i = 0; i < r ; ++i)
			{
				if(a >= vr[i])
				{	
					vrr.push_back(vr[i]);
					countr++;

				}

			}

			fxyz(a,vpp,vrr,countp,countr);	
	//			return 0;
}

int main()
{
	int test;
	long long int p,q,r;

	scanf("%d",&test);

	while(test--)
	{
		final_sum=0;
		cin >> p;
		cin >> q;
		cin >> r;
		std::vector<long long int> vp;
		std::vector<long long int> vq;
		std::vector<long long int> vr;

		for (long long int i = 0; i < p; ++i)
		{
			long long int a;
			cin >> a;
			vp.push_back(a);
		}

		for (long long int i = 0; i < q; ++i)
		{
			
			long long int a;
			cin >> a;
			vq.push_back(a);
		}

		for (long long int i = 0; i < r; ++i)
		{
			long long int a;
			cin >> a;
			vr.push_back(a);
		}
		long long int y;
		for (long long int i = 0; i < q; ++i)
		{
			y = vq[i];
			
			if(y==0)
			{
				final_sum=final_sum%m;
			}
			else
			{
			checker(y,vp,vr,p,r);
			}	
		}
		final_sum = final_sum %m;
		cout << final_sum  << endl;

	}
}