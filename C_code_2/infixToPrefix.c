#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
// {[2+(3*5)]-(2*3)}
// 235*+23*-
char infix[20] = {"2+3*5-2*3"};
char postfix[20] = {};

struct  Node
{
    char data;
    struct Node* link;
};
struct Node* top;

struct Node* MakeNewNode(char c)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = c;
    newNode->link = NULL;
    return newNode;
}

void Push(char c)
{
    struct Node* newNode = MakeNewNode(c);
    newNode->link = top;
    top = newNode;
}

char Pop()
{
    if(top != NULL)
    {
    struct Node* temp = top;
    top = top->link;
    return temp->data;
    }
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
char Top()
{
    return top->data;
}

void InfixToPostfix()
{
    int a = strlen(infix);
    int j = 0;
    for(int i = 0;i<9;i++)
    {

        if(isdigit(infix[i]))
        {
            postfix[j] = infix[i];
            j++;

        }else if(infix[i] == '+' ||infix[i] == '-') 
        {
            if(Top() == '*' || Top() == '/')   
            { 
                while(IsEmpty() != true)
                {
                    postfix[j] = Pop();
                    j++;
                }
                Push(infix[i]);
            }else
            {
                Push(infix[i]);
            }
        }else if(infix[i] == '/' || infix[i] == '*')
        {
            Push(infix[i]);
        }
    }
    while(IsEmpty() != true)
    {
    postfix[j] = Pop();
    j++;
    }
}




int main()
{
    InfixToPostfix();
    int b = strlen(postfix);
    printf("postfix array is:");
    for(int k = 0; k<b;k++)
    {
        printf("%d ",postfix[k]);
    }
    return 0;
}

