#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;

};
struct Node* head;
struct Node* GetNewNode(int x)
{

    struct Node* newNode =  (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void InsertAtHead(int x)
{
    struct Node* newNode = GetNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void InsertAtEnd(int x)
{
    struct Node* newNode = GetNewNode(x);
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
    printf("Forward printf:");
    while(temp->next != NULL);
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void ReversePrint()
{
    struct Node* temp = head;
    if(temp == NULL)
    {
        return;
    }
    while(temp != NULL)
    {
        temp = temp->next;
    }
    printf("Reverse print:");
    while(temp->prev != NULL)
    {
        printf("%d", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main()
{
    head = NULL; 
    InsertAtHead(2); Print(); ReversePrint();
    InsertAtHead(4); Print(); ReversePrint();
    InsertAtHead(6); Print(); ReversePrint();
    return 0;

}
