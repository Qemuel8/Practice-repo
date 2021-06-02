#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
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
void Push(int x)
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

int Perform(char x, int a, int b)
{
    switch(x)
    {
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        default:
            return 0;
            break;
    }
}

int CheckPrefix(char myExp[10], int string)
{
    for(int i = string-1;i>=0;i--)
    {
        if(isdigit(myExp[i]))
        {
            Push(myExp[i] - 48);
        }else if( myExp[i] == '+' || myExp[i] == '-'  || myExp[i] == '*' || myExp[i] == '/')
        {
            int op1 = Pop();
            int op2 = Pop();
            int result = Perform(myExp[i], op1, op2);
            Push(result);
        }
    }
    return top->data;
}

int main()
{
    char myExp[10] = {"*3*23"};
    int string = strlen(myExp);
    int result = CheckPrefix(myExp,string);
    printf("%d",result);

    return 0;
}

