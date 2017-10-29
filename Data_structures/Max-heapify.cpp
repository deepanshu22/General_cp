#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int heapsize;
int Parent(int i)
{
	return (i/2);
}

int left(int i)
{
	return 2*i;
}

int right(int i)
{
	return (2*i+1);
}

void Max_heapify(int arr[],int i)
{
	int largest;
	int l = left(i);
	int r = right(i);
	//cout << l <<r << " " << arr[l]<<endl;
	if(l <= heapsize && arr[l] > arr[i])
	{
		largest = l;
		//printf("%d\n",arr[l]);
	}
	else
		largest = i;

	if(r <= heapsize && arr[r] > arr[largest])
	{
		largest = r;
	}

	if (largest!= i)
	{
		int temp = arr[i];
		arr[i] = arr[largest];
		arr[largest] = temp;

		Max_heapify(arr,largest);
	}
}

void Build_max_heap(int arr[])
{
	int len = heapsize;
	for (int i = (len/2);i > 0;i--)
	{
		Max_heapify(arr,i);
	}
}


void Min_heapify(int arr[],int i)
{

	int l = left(i);
	int r = right(i);
	int smallest;

	if (l <= heapsize && arr[l] < arr[i] )
	{
		smallest =  l;
	}

	else
		smallest = i;

	if (r <= heapsize && arr[r] < arr[smallest])
	{
		smallest = r;
	}

	if(smallest != i)
	{
		int temp = arr[i];
		arr[i] = arr[smallest];
		arr[smallest] = temp;

		Min_heapify(arr,smallest);

	}
}

void Build_min_heap(int arr[])
{
	int len = heapsize;

	for (int i = 1; i <= (len/2) ; ++i)
	{
		Min_heapify(arr,i);
	}
}

int main()
{
	int arr[100],arr1[100];
	heapsize = 10;
	for (int i = 1; i <= 10; ++i)
	{
		cin >>  arr[i] ;
		arr1[i]=arr[i];
	}

	

	Build_max_heap(arr);
	Build_min_heap(arr1);

	for (int i = 1; i <= heapsize; ++i)
	{
		cout << arr[i] << " ";
	}
	printf("\n");

	for (int i = 1; i <= heapsize; ++i)
	{
		cout << arr1[i] << " ";
	}


		
	

	
}