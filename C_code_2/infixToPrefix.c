#include<ctype.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
// {[2+(3*5)]-(2*3)}
// 235*+23*-
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

char Top()
{
    if(top != NULL)
    {
    return top->data;
    }
}

char Pop()
{
    char c = Top();
    if(top != NULL)
    {
    struct Node* temp = top;
    top = top->link;
    free(temp);
    return c;
    }
}

void Add(char c, char postfix[])
{
    strncat(postfix, &c, 1);
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

void InfixToPostfix(char infix[], char postfix[])
{
    int i = 0;  
    for(int i; i<3; i++)
    {
        char item = infix[i];
        if(isdigit(item))
        {
            Add(item, postfix);

        }else if(item == '+' || item == '-') 
        {
            if(Top() == '*' || Top() == '/')   
            { 
                while(IsEmpty() == false)
                {
                    Add(Pop(),postfix);   
                }
                Push(item);
            }else
            {
                Push(item);
            }
        }else if(item == '/' || item == '*')
        {
            Push(item);
        }
        
    }

    while(IsEmpty() == false)
    {
        Add(Pop(), postfix);       
    }
}




int main()
{
    
    char infix[20] = "2+3";
    char postfix[50];
    top = NULL;
    InfixToPostfix(infix, postfix);
    int i = 0;
    while(postfix[i] != '\0')
    {
        printf("%c", postfix[i]);
        i++;
    }
    return 0;
}

