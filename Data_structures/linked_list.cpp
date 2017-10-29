#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct node
{
	int key;
	node *next;
};

void insert(struct node **head,int data)
{
	struct node *new_node = (struct node*)malloc(sizeof(struct node));
	//cout << "ja raha hai \n";
	new_node->key = data;
	new_node->next = *head;

	*head = new_node;

}

void print_all(struct node *node)
{
	//cout << "ja raha hai idhar bhi ";
	while(node!=NULL)
	{
 	cout << node->key <<" ";
 	node = node->next;
 	}
}
int main()
{
	struct node* head = NULL;

	cout << "Enter the number of elements ?:" << endl;
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		insert(&head,a);

	}

	print_all(head);

}