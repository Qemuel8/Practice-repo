#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

struct Node
{
    char data;
    struct Node* next;
};

char infix[20] = "2+5";

struct Node* head;
struct Node* top;



struct Node* MakeNewNode(int x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

void Push(char x)
{
    struct Node* newNode = MakeNewNode(x);
    if(top == NULL)
    {
        top = newNode;
        return;
    }
    top->next = newNode;
    return;
}


void Add(char x)
{
    struct Node* newNode = MakeNewNode(x);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    head->next = newNode;
    return;
}

char Top()
{
    if(top != NULL)
    {
        return top->data;
    }
}

void Pop()
{
    
    if(top != NULL)
    {
        struct Node* temp = top;
        top = top->next;
        free(temp);
        return;
    }
}

bool IsEmpty()
{
    if(top == NULL)
    {
        return true;
    }
    return false;

}
bool CheckNumber(char x)
{
    if(x == '0' || x == '1' || x == '2' || x == '3' || x == '4' || x == '5' || x == '6' || x == '7' || x == '8' || x == '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void InfixToPrefix(int y)
{
    for(int i = 0; i<7; i++)
    {
        if(CheckNumber(infix[i]))
        {
            Add(infix[i]);
        }else
        {
            if(infix[i] = '(' || '{' || '[')
            {
                Push(infix[i]);
            }
            else if(infix[i] == ')' || ']' || '}')
            {
                for(int i = 0; i<100; i++)
                {
                    if(Top() == ')' || ']' || '}') break;
                    Add(Top());
                    Pop();
                }

            }
            else if(infix[i] == '+' || '-')
            {
                if(Top() == '*' || '/')
                {
                    while(top != NULL)
                    {
                        Add(Top());
                        Pop();
                    }
                }
                Push(infix[i]);
            }
            else if(infix[i] == '/' || '*')
            {
                Push(infix[i]);
            }
            
        }
    }
    while(top != NULL)
    {
        Add(Top());
        Pop();
    }
}

void Print()
{
    struct Node* temp = head;
    while(temp->next != NULL)
    {
        printf("%c", temp->data);
        temp = temp->next;
    }
}


int main()
{
    top = NULL;
    head = NULL;
    int length = strlen(infix);
    InfixToPrefix(length);
    Print();
    
    return 0;
}