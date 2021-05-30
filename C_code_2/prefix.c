#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

struct Node* MakeNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = NULL;
    return newNode;
}
void push(int x)
{
    struct Node* newNode = MakeNewNode(x);
    if(top==NULL)
    {
        top = newNode;
        return;
    }
    newNode->link = top;
    top = newNode;
}

int Pop()
{
    if(top != NULL)
    {
        struct Node* temp = top;
        top = top->link;
        int num1 = temp->data;
        free(temp);
        return num1;
    }
}

int Perform()
{





int main()
{
    return 0;
}

