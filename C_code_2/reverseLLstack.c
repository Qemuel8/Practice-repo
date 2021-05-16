#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Node
{
    int data;
    int link;
};
struct Node* head;

struct NodeP
{
    struct Node* data;
    struct Node* link;
}
void Add(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = head;
    head = newNode;
}

struct NodeP* top;

void Push(int x)
{
    struct NodeP* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link =top;
    top = newNode;
}

void Pop()
{
   struct NodeP* temp;
   temp = top;
   temp->link = top;
   top = temp;
}

struct Node* Top()
{
    return top->data;
}

bool IsEmpty()
{
    if(top!=NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};



int main()
{
    head = NULL;
    top = NULL;

    for(int i; i<5; i ++)
    {
        int a;
        printf("please enter a number");
        scanf("%d", %a);
        Add(a);
    }




    return 0;
}

