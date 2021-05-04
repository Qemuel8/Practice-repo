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
	struct Node* temp = head;
	while(temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void Insert(int data, int n)
{
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
	temp1->data = data;
	temp1->next = NULL;
	if(n == 1)
	{
		temp1->next = head;
		head  = temp1;
		return;
	}
	struct Node* temp2 = head;
	for(int i = 0;i<n-2;i++)
	{
		temp2 = temp2->next;
	}
	temp1->next = temp2->next;
	temp2->next = temp1;
}
int main()
{
	head = NULL; // initally the list is empty.
	Insert(2,1); // List: 2
	Insert(3,2); //List: 2,3
	Insert(4,1); //List: 4,2,3
	Insert(5,2); //List: 4,5,2,3
	Insert(3,3); //List: 4,5,3,2,3
	Insert(5,6); //List: 4,5,3,2,3,5
	Print();
	
	return 0;
}
