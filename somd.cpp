#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	//printf("hello world\n");

	int test;
	scanf("%d",&test);

	for (int i = test; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}