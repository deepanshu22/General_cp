#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;

int seq_gen(char arr[])
{	
	int sum=0;
	if (arr[0] == '<')
	{
		sum=2;
		if (strlen(arr) == 1)
		{
			return sum;
		}
		
	}
	else if(arr[0] == '>' || arr[0] == '=')
	{
		sum=1;
		if (strlen(arr) == 1)
		{
			return sum+1;
		}

	}
	int flag=0;
	for (int i = 1; i < strlen(arr); ++i)
	{
		if (arr[i] == '<' && arr[i-1] == '<')
		{
			sum=sum+1;
		}
		else if(arr[i] == '<' && arr[i-1] == '=' )
		{	
			if(flag ==1)
			{	
				sum=sum+1;
				flag=0;
			}
			else
			{
				sum=sum+0;
			}
			
		}
		else if(arr[i] == '<' && arr[i-1] == '>' && i !=0)
		{
			sum=sum+0;
		}
		else if (arr[i] == '<' && arr[i-1] == '>' && (i-1) == 0)
		{
			sum=sum+1;
		}
		else if(arr[i] == '=')
		{
			sum = sum+0;
		}
		else if(arr[i] == '>')
		{
			sum = sum+0;
			flag=1;
		}

	}
	if (sum==1)
	{
		sum=sum+1;
	}
	return sum;
}
int main()
{
	int test;

	cin >>  test;

	while(test--)
	{
		char arr[1000];
		scanf("%s",arr);
		int max = seq_gen(arr);
		cout << max << endl;	
	}
}