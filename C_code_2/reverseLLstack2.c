#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int a;
struct Node
{
    int data;
    struct Node* next;
};
struct SNode
{
    struct Node* data;
    struct SNode* link;
};

struct Node* head;
struct SNode* top;

struct Node* MakeNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

struct SNode* Top()
{
    return top;
}

void Pop()
{
    if(top!=NULL)
    {
    struct SNode* temp = Top();
    top = top->link;
    free(temp);
    }
}
    

bool IsEmpty()
{
    if(top==NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
}

void Add(int x)
{
    struct Node* newNode = MakeNewNode(x);
    struct Node* temp = head;
    if(temp==NULL)
    {
        head = newNode;
        return;
    }
       while(temp->next != NULL)
        {
            temp = temp->next;
        }
       temp->next = newNode;
}
void Push(struct Node* x)
{
    struct SNode* newNode = (struct SNode*)malloc(sizeof(struct SNode*));
    newNode->data = x;
    newNode->link = top;
    top = newNode;
}


void Print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
    printf("%d ", temp->data);
    temp = temp->next;
    }
    printf("\n");
}

void Reverse()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
    Push(temp);
    temp = temp->next;
    }
    struct SNode* temp2;
    while(IsEmpty()!=true)
    {
        temp2 = Top();
        Add(temp2->data->data);
        Pop();
    }
}

int main()
{
    head = NULL;
    top = NULL;
    int j;
    printf("How many numbers do you want to add to you linked list?");
    scanf("%d",&j );
    for(int i = 0;i<j;i++)
    {
        printf("Enter a number:");
        scanf("%d", &a);
        Add(a);
    }
    Print();
    Reverse();
    Print();
    return 0;
}
