#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test,n;

	int arr[1000];
	for (int i = 0; i < 200; ++i)
	{
		arr[i]=0;
	}
	cin >> test;

	while(test--)
	{
		cin >> n;
		int pos=0;
		for (int i = 1; i <= n; ++i)
		{
			cin >> arr[i];
		}

		int temp[15];
		for (int i = 1; i <= 10; ++i)
		{
			temp[i]=0;
		}
		for (int i = 1; i <=n ; ++i)
		{
			temp[arr[i]] = 1;
		}

		/*for (int i = 1; i <=10; ++i)
		{
			cout << temp[i] << " " ;
		}*/

		int flag=0,flag2=0;
		for (int i = 1; i <= 10; ++i)
		{
			if (temp[i] == 0 && i <= 7)
			{
				flag = flag + 1;

			}
			else if(temp[i] == 1 && i > 7)
			{
				flag2 = flag2+1;
			}
		}

//		cout << flag <<" "<< flag2 << endl;

		if (flag > 0 || flag2 >0)
		{
			printf("no\n");
		}
		else
		{	int i=1,k=0,check=0;
			while(1)
			{
				if (arr[i]==arr[n-k])
				{
					i=i+1;
					//printf("chamola\n");
					//cout << arr[i]<<arr[n-k]<< endl;		
					//if(arr[i+1]!=arr[n-k])
					k=k+1;	
				}
				else if(arr[i] < arr[n-k])
				{
					i=i+1;
					//printf("hola\n");
				}
				if(arr[i] > arr[n-k])
				{
					printf("no\n");
					check=1;
					break;
				}
				if(arr[i]==7)
					break;
			}

			if (check==0)
			{
				printf("yes\n");
			}
		}

	}	

}
