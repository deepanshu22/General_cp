#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int length(char input[])
{
	int len=0;
	for (int i = 0;  input[i]!='\0'; ++i)
	{
		len++;
	}
	return len;
}
void Rmx(char input[],int start)
{
	if(input[start]=='\0')
	{
		return;
	}
	cout << "value of start 1: "<< start << endl;
	
	cout << "value of start 2: "<< start << endl;	
	if (input[start] == 'x')
	{
		int len = length(input);
		int i;
		for (i = start+1; i < len ; i++)
		{	
			cout << input[i] << " " << input[i-1]<<endl;
			input[i-1] = input[i];	
		}
		input[i-1] = '\0';
	}
	Rmx(input,start+1);

}
void Rmx(char input[])
{
	Rmx(input,0);
	/*int len =  strlen(arr);
	if(arr[i] != 'x')
	{
		temp[j] = arr[i];
		j++;

	}
	
	if(arr[i] != '\0')
	{	
		//flag=1;
		i++;
		Rmx(arr);
	}
	else	
	{
		strcpy(arr,temp);
	}
	*/

	
}

int main()
{
	char arr[100];

	scanf("%s",arr);
//	int len = strlen(arr);
	
	Rmx(arr);
	for (int i = 0; i < strlen(arr); ++i)
	{
		cout << arr[i];
	}
	

}