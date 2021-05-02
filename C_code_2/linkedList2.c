#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

struct Node* head;

void Print()
{
	
}

void Insert(int data, int n)
{
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
	temp1->data = data;
	temp1->next = NULL;
	if(n == 1)
	{
		temp1->next = head;
		head  =
	}
}
int main()
{
	head = NULL; // initally the list is empty.
	Insert(2,1); // List: 2
	Insert 3,2); //List: 2,3
	Insert(4,1); //List: 4,2,3
	Insert(5,2); //List: 4,5,2,3
	Print();
	
	return 0;
}
