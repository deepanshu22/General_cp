#include <bits/stdc++.h>

using namespace std;


void chcker(int n[],int size)
{
	int temp[size];
	int cmp[11];

	for (int i = 1; i <= 10; ++i)
	{
		cmp[i] = i;
	}
	int k=1;
	for (int i = 1; i <= size+1 ; ++i)
	{
		if(n[i+1] != n[i])
		{
			temp[k] = n[i];
			++k;
		}
	}
	int flag=0;
	for (int i = 1; i <=10; ++i)
	{
		if (temp[i]==cmp[i])
			{
				flag = flag+1;	
			}	
	}
	if (flag == 7)
		printf("yes\n");
	
	else
		printf("no\n");



}
int main()
{
	int test,N;
	int n[105];

	cin >> test;

	while(test--)
	{
		cin >> N;
		for (int i = 1; i <= N; ++i)
		{
			cin >> n[i];
		}
		
		if (N < 13)
		{
			cout << "no" << endl;
		}
		else
		{
			int temp = 0;
			int count = 0;

			if (N % 2 == 0)
			{
				temp = N/2;
				count = 0;
			}
			else
			{
				temp = (N/2) + 1;
				count = 1;
			}
			//cout << temp << endl;
			int suml=0,sumr=0,final_sum=0;
			
			if(count == 1)
			{	
				for (int i = 1; i <= N; ++i)
				{
					if (i < temp)
					{
						suml+=n[i];
					}
					else if (i == temp)
					{
						final_sum +=n[i];
					}
					else
					{
						sumr+=n[i];
					}
				}
			}
			else
			{
				for (int i = 1; i <= N; ++i)
				{
					if (i <= temp)
					{
						suml+=n[i];
					}
					else
					{
						sumr+=n[i];
					}
				}
			}
			//cout << suml << " left " << sumr << " right" << endl;

			if(sumr == suml)
			{
				chcker(n,temp);
			}
			else
			{
				cout<<"no"<<endl;
			}
		}
	}


}