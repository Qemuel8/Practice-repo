#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* head;

struct NodeP
{
    struct Node* data;
    struct NodeP* link;
};

struct NodeP* top;

void Add(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = NULL;
    if(head==NULL)
    {
        head = newNode;
        return;
    }
    struct Node* temp;
    temp = head;
    while(temp->link!=NULL)
    {
        temp = temp->link;
    }
    temp->link = newNode;
}




void Print()
{
    struct Node* temp;
    temp = head;
    while(temp!=NULL)
    {
    printf("%d ", temp->data);
    temp = temp->link;
    }
    printf("\n");
}



void Push(struct Node* p)
{
    struct NodeP* newNode = (struct NodeP*)malloc(sizeof(struct NodeP*));
    newNode->data = p;
    newNode->link = top;
    top = newNode;
}

void Pop()
{
   struct NodeP* temp;
   temp = top;
   top = top->link;
   free(temp);
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
void Reverse()
{
    struct Node* p;
    p = head;
    while(p->link != NULL)
    {
    Push(p);
    p = p->link;
    }
    while(IsEmpty() != true)
    {
        struct Node* temp;
        temp = Top();
        Add(temp->data);
        Pop();
    }
}



int a;
int main()
{
    head = NULL;
    top = NULL;
    for(int i;i<5;i++)
    {
        printf("Please Enter a Number: ");
        scanf("%d", &a);
        Add(a);
    }
    Print();
    Reverse();
    Print();



    return 0;
}

