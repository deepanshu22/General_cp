#include <stdio.h>
#include <iostream>
//#include <math.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>


using namespace std;

int main()
{
		
		int n;
		scanf("%d",&n);
		char arr[100005];
		while(n--)
		{
			scanf("%s",arr);
			int i =1;
			int k = i-1;
			int count=0;
			//printf("%d\n",strlen(arr));
			for(int i = 1 ; i <= strlen(arr);i++)
			{
				// printf("%c\n",arr[i]);
				if(arr[i-1]=='E' && arr[i]=='C')
				{
					
					count++;
				}
				else if(arr[i-1]=='S' && arr[i]=='C')
				{
					//printf("no\n");
					count++;	
				}
				else if(arr[i-1]=='E' && arr[i]=='C')
				{
					//printf("no\n");
					count++;
				}
				else if(arr[i-1]=='S' && arr[i]=='E')
				{
					//printf("no\n");
					count++;
				}

				
			}
			
				if(count==0)
				{
					printf("yes\n");
				}
				else
				{
					printf("no\n");
				}
		}
	
}