#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

struct Node
{
    char data;
    struct Node* link; 
};

struct Node* top;
struct Node* head;

char infix[] = "2+3*5-1"; // 235*+1-

struct Node* MakeNewNode( char x )
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = NULL;
    return newNode;
}

char Top()
{
if(top != NULL)
{

    return top->data;
}
}

void Add(char k)
{
    struct Node* newNode = MakeNewNode(k);
    if(head == NULL)
    {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while(temp->link != NULL)
    {
        temp = temp->link;
    }
    temp->link = newNode;
}

void Push( char x )
{
    struct Node* newNode = MakeNewNode(x);
    if(top == NULL)
    {
        top = newNode;
        return;
    }

    newNode->link = top;
    top = newNode;
}

struct Node* Pop()
{
    if(top != NULL)
    {
        struct Node* temp = top;
        top = top->link;
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

bool CheckNumber(char a)
{
    if( a == '1' || a == '2' || a == '3' || a == '4' || a == '5' || a == '6' || a == '7' || a == '8' || a == '9' || a == '0')
    {
        return true;
    }else
    {
        return false;
    }
}



void InfixToPostfix(int length)
{
    for(int i = 0;i<length;i++)
    {
        if(CheckNumber(infix[i]))
        {
            Add(infix[i]);
        }else
        {
            if(infix[i] == '+' || infix[i] == '-')
            {
                if(Top() == '*' || Top() == '/')
                {
                    while(top != NULL)
                    {
                        Add(Top());
                        Pop();
                    }
                    Push(infix[i]);
                }else
                {
                    Push(infix[i]);
                }
            }
            else if(infix[i] == '*' || infix[i] == '/')
            {
               Push(infix[i]);
            }
        }
    }
    while(IsEmpty() != true)
    {
        Add(Top());
        Pop();
    }
}

void Print()
{
    struct Node* temp = head;
    while( temp != NULL )
    {
        printf("%c ", temp->data);
        temp = temp->link;
    }
}

int main()
{
    top = NULL;
    head = NULL;
    int length = strlen(infix);
    InfixToPostfix(length);
    Print();
    return 0;
}

