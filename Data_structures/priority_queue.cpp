#include <stdio.h>
#include <iostream>
#include <string>
#define min -32000
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


int Heap_max(int arr[])
{
	return arr[1];
}

int Heap_Extract_max(int A[])
{
	if (heapsize < 1)
	{
		cout <<"heap under flow";
	}

	int max = A[1];
	A[1] = A[heapsize];
	heapsize = heapsize-1;
	Max_heapify(A,1);
	return max;
}

void Heap_increase_key(int arr[],int i ,int key)
{
	if(key < arr[i])
		cout << "new key is smaller than current key";
	arr[i] = key;

	while(i > 1 && arr[Parent(i)] < arr[i])
	{
		int temp = arr[i];
		arr[i] = arr[Parent(i)];
		arr[Parent(i)] = temp;
		i = Parent(i);
	}
}

void Max_heap_insert(int arr[],int key)
{
	heapsize = heapsize+1;
	arr[heapsize] = min;
	Heap_increase_key(arr,heapsize,key); 
}
int main()
{
	int arr[100];
	heapsize = 10;
	for (int i = 1; i <= 10; ++i)
	{
		cin >>  arr[i] ;
		//arr1[i]=arr[i];
	}

	

	Build_max_heap(arr);
	for (int i = 1; i <= heapsize; ++i)
	{
		cout << arr[i] << " ";
	}
	printf("\n");
	int heapmax=Heap_max(arr);;
	cout <<"max of heap : "<< heapmax << endl;

	//int extract = Heap_Extract_max(arr); // give the maximum element then heapifies the rest of the aray 
	//Heap_increase_key(arr,9,15); //this function increase the value of an element in the priority queue 
	Max_heap_insert(arr,12); //insert the given element in the array
	
	cout <<"after Extraction :"<< heapsize << endl;

	for (int i = 1; i <= heapsize; ++i)
	{
		cout << arr[i] <<" ";
	}
	printf("\n");
}