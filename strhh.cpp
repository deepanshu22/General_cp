#include <stdio.h>
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <vector>
#include <math.h>
using namespace std;


int main()
{
	int test;

	cin >> test;
	//std::vector<char> v;
	char arr[10001];
	while(test--)
	{
		
		scanf("%s",arr);
		// cout << strlen(arr);
		cout << arr[0];

		for (int i = 1; i < strlen(arr)/2; ++i)
		{
			if(i%2==0)
			{
				cout << arr[i];
			}
		}

		printf("\n");
	}
	
	
}