#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node 
{
    char data;
    struct Node* link;
};
struct Node* top;

void Push(char x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = top;
    top = newNode;
}

void Pop()
{
    struct Node* temp;
    temp = top;
    top = top->link;
    free(temp);
}

int Top()
{
    return top->data;
}



void Reverse(char *a, int n)
{
    for(int i = 0; i<n;i++)
    {
        Push(a[i]);
    }
    for(int i = 0;i<n;i++)
    {
       a[i] = Top();
       Pop();
    }
}



int main()
{
    top = NULL;
    char a[20] = {0};
    printf("Please enter a string =  ");
    scanf("%s", a);
    Reverse(a, strlen(a));
    printf("output = %s ", a);
    return 0;
}
