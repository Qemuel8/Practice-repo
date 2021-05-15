#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node* link;
};
struct Node* top = NULL;

void Push(int  x)
{ 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node*));
    temp->data = x;
    temp->link = top;
    top = temp;
}
void Pop()
{
    struct Node* temp;
    if(top == NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}
int Top()
{
    return top->data;
}
bool IsEmpty()
{
    if(top == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}
void Print(struct Node* temp)
{
    if(temp==NULL) return;
    printf("%d ", temp->data);
    Print(temp->link);
}

int main()
{
    int a;
    Push(2);
    Push(5);
    Print(top);
    Pop();
    Print(top);
    Push(5);
    Push(8);
    Print(top);
    a = IsEmpty();
    if(a == true)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    int b = Top();
    printf("%d", b);

    return 0;
}
