#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;

struct Node* GetNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void InsertAtHead(int y)
{
    struct Node* newNode = GetNewNode(y);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}

void InsertAtEnd(int z)
{
    struct Node* newNode = GetNewNode(z);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->next = newNode;
    newNode->prev = head;
}

void Print()
{
    struct Node* temp = head;
    printf("forward:");
    while(temp != NULL);








int main()
{

    return 0

}
