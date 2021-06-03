#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
// {[2+(3*5)]-(2*3)}
// 235*+23*-
char infix[20] = {"2+3"};
char *postfix;
postfix= malloc(20 * sizeof(char);

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
    if(top == NULL)
    {
        top = newNode;
        return;
    }
    newNode->link = top;
    top = newNode;
}

char Pop()
{
    char c = top->data;
    if(top != NULL)
    {
    struct Node* temp = top;
    top = temp->link;
    free(temp);
    return c;
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
    for(int i = 0;i<7;i++)
    {
        
        for(int k = 0; k<i;k++)
        {
            printf("%c ",postfix[k]);
        }
        if(isdigit(infix[i]))
        {
            postfix[j] = infix[i];
            j++;

        }else if(infix[i] == '+' || infix[i] == '-') 
        {
            if(Top() == '*' || Top() == '/')   
            { 
                while(IsEmpty() == false)
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
    while(IsEmpty() == false)
    {
    postfix[j] = Pop();
    j++;
    }
}




int main()
{
    top = NULL;
    InfixToPostfix();
    int b = strlen(postfix);
    printf("postfix array is:");
    for(int k = 0; k<b;k++)
    {
        printf("%c ",postfix[k]);
    }
    return 0;
}

