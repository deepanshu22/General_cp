#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <set>

using namespace std;
int maxi(int a,int b);
void shifti(int arr[],int size)
{	int k=1;
	for(int i = 1; i <size;i++)
	{
		if((i%2)==0)
		{
			int x = maxi(arr[i],arr[i+1]);
			//printf("%d\n",x);
			if(x != arr[i])
			{
				int temp=arr[i];
				arr[i] = x;
				arr[i+1]=temp;
			}

		}
		else
		{	
			int x = maxi(arr[i],arr[i+1]);
			//printf("%d\n",x);
			if(x != arr[i+1])
			{
				
				int temp=arr[i+1];
				arr[i+1] = x;
				arr[i]=temp;
			}

		}
	}
	
}
int maxi(int a ,int b)
{
	if(a >= b)
	{
		//printf("%d\n",a);
		return a;
	}
	else
	{	
		//printf("%d\n",b);
		return b;
	}
}
int main()
{
	int T,sz;

	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&sz);
		sz=2*sz;
		int S=sz;
		int arr[sz+1],arr1[sz+1];
		int i=1;
		while(sz--)
		{	
			int a;
			scanf("%d",&a);
			//printf("yes1\n");
			arr[i]=a;
			i++;
		}
		shifti(arr,S);
		
		int k = 2;
		for(int j = 1 ; j <=S/2;j++)
		{	
			//printf("%d ",arr[j] );
			arr1[j] = maxi(arr[2*j-1],arr[2*j]);
			//k++;
		}
		int temp=S/2;
		//temp=temp/2;
		printf("%d  \n",arr1[(temp+1)/2]);
		for(int j = 1;j <= S;j++)
		{	
			printf("%d ",arr[j]);
		}
		printf("\n");
		

	}


	return 0;
}