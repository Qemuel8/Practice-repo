#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* MakeNewNode(int data, struct Node* head)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* Add(int data, struct Node* head)
{
    if(head == NULL)
    {
        head = MakeNewNode(data,head);
        return head;
    }
    else
    {   
       head->next = Add(data, head->next);
       return head;
    }
}

struct Node* Delete(int data, struct Node* head)
{
    struct Node* temp = head;
    if(temp->data == data)
    {

        head = temp->next;
        free(temp);
    }
    else
    {
        Delete(data, head->next);   
    }
}
/*
void Print(struct Node* head)
{
    if(head->next != NULL)
    {
        printf("%d ", head->data);
        Print(head->next);
    }
    else
    {
        return;   
    }
} */

int main()
{
    struct Node* head = NULL;
    head = Add(1,head);
    head = Add(2,head);
    head = Add(3,head);
    head = Add(4,head);
    head =  Delete(2,head);
    head = Delete(3,head);
    //Print(head);
    return 0;
}