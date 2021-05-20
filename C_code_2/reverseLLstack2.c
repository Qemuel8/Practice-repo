#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int x;
struct Node
{
    int data;
    struct Node* next;
}
struct StackNode
{
    struct Node* data;
    struct StackNode* link;
}
struct Node* head;
struct SNode* top;

struct Node* MakeNewNode()
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

struct Node* Top
{
    return top->data;
}

void Pop()
{
    if(top!==NULL)
    {
    struct SNode* temp = top;
    top = top->link;
    free(temp)
    }
}
    

bool IsEmpty()
{
    if(top==NULL)
    {
        return 1;
    }else
    {
        return 0
    }
}

void AddN(int x, int y)
{
    struct Node* newNode = MakeNewNode(x);
    if(y==1)
    {
      if(head!=NULL) newNode->next = head->next;
      head = newNode;
    }
    struct Node* temp = head;
    for(int i = 0;i<y-2;i++)
    {
        if(temp!=NULL)temp = temp->next;
        else if(temp==NULL)
        {
            temp = MakeNewNode(0);
            temp = temp->next;
        }
    }
    if(temp->next!=NULL)
    temp->next = newNode;

     
}



void Push()
{


void Print();

void Reverse();

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
        scanf("%d" &x);
        AddN(x);
    }
    Print;
    Reverse;
    Print;
    return 0;
}
