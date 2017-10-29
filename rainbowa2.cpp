#include <bits/stdc++.h>

using namespace std;

int main()
{
	int test,n;

	int arr[100];

	cin >> test;

	while(test--)
	{
		cin >> n;

		for (int i = 1; i <= n; ++i)
		{
			cin >> arr[i];
		}

		int flag=0;
		int sum=0;
		for (int i = 1; i <= 10; ++i)
		{
			flag=0;
			for (int j = 1; j <= n; ++j)
			{
				if (i == arr[j] && flag == 0)
				{	//cout<< i << " " << arr[j] << endl;
					sum +=arr[j];
					flag=1;	
				}
			}
		}

		//cout << sum << endl;
		unordered_map<int, int> umap,umap1;
		if (sum > 28)
		{
			printf("no\n");
		}
		else
		{
			for (int i = 1; i <=n ; ++i)
			{
				if (arr[i] == 7)
				{
					break;
				}
				else
				{
					umap[arr[i]]++;
				}
			}

			for (int i = n; i > 0 ; --i)
			{
				if (arr[i] == 7)
				{
					break;
				}
				else
				{
					umap1[arr[i]]++;
				}
			}

			unordered_map<int ,int >:: iterator p ;

			int a = umap.size();
			int b = umap1.size();
			int count=0;
			//cout << a <<" " << b << endl;
			if (a<=b)
			{
				for(int i = 1 ; i <= b;i++)
				{
									
					if (umap[i] == umap1[i] && umap[i]!=0)
					{
						count=count+1;
						//cout << count << "yeh hai count pehle loop"<<endl;
					}
				}

				if (count == a)
				{
					printf("yes\n");
				}
				else
					printf("no\n");

			}
			else
			{

				for(int i = 1 ; i <= a;i++)
				{
									
					if (umap[i] == umap1[i] && umap1[i]!=0)
					{
						count=count+1;
						//cout << count << "yeh hai count"<<endl;
					}
				}

				if (count == b)
				{
					printf("yes\n");
				}
				else
					printf("no\n");
			}
		
		}
	}
}