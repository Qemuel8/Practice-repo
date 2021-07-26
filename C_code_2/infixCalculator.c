#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Node
{
    char data;
    struct Node* next;
};
struct Node* top;
struct Node* head;

struct Node* MakeNewNode(char x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void Add(char x)
{
    struct Node* newNode = MakeNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

char Return(int n, int max)
{
    if(n == 0)
    {
        return head->data;
    }
    struct Node* temp = head;
    for(int i = 0;i<n-1;i++)
    {
        if(temp->next == NULL)
        {
            printf("nullptr error");
            return;
        }
        temp = temp->next;
    }
    temp = temp->next;

}

void Push(char x)
{
    struct Node* newNode = MakeNewNode(x);
    newNode->next = top;
    top = newNode;
}
struct Node* Top()
{
    if(top != NULL)
    {
    return top;
    }
}

void Pop()
{
    if(top != NULL)
    {
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }
}

bool IsEmpty()
{
    if(top == NULL)
    {
        return true;
    }else if(top != NULL)
    {
        return false;
    }
}

void Print(struct Node* input)
{
    struct Node* temp = input;
    while(temp != NULL)
    {
        printf("%c", temp->data);
        temp = temp->next;
    }
}

void InfixToPrefix(int length)
{
    for(int i = 0; i<length; i++)
    {
        char c = 
        if()
    }
}

int main()
{
    head = NULL;
    top = NULL;
    int i = 0;
    char input[50];
    printf("Please enter a correct expression: ");
    fgets(input, 50, stdin);
    while(input[i] != '\0')
    {
        Add(input[i]);
        i++;
    }
    Print(head);

    return 0;
}