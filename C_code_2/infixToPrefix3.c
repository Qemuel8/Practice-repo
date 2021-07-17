#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<ctype.h>

struct Node
{
    char data;
    struct Node* next;
};

//char array[] = "3+{2*[(2+5)+3*3]}"; // result should be = 2 5 + 3 3 * + 2 * 3 + ///// 2*(3+4)
char array[] = "(2+3)*5";
struct Node* top;
struct Node* head;


struct Node* MakeNewNode(char x)
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
    newNode->next = top;
    top = newNode;
}

void Add(char x)
{
    struct Node* newNode = MakeNewNode(x);
    if(head == NULL)
    {
        newNode->next = head;
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
    }
}

bool IsEmpty()
{
    if(top == NULL)
    {
        return true;
    }
    else if(top != NULL)
    {
        return false;
    }
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

void InfixToPostfix( int length)
{
    for(int i = 0; i<length; i++)
    {
        if(CheckNumber(array[i]))
        {
            Add(array[i]);
        }else
        {
            if(array[i] == '(' || array[i] == '{' || array[i] == '[')
            {
                Push(array[i]);
            }
            else if(array[i] == ')' || array[i] == '}' || array[i] == ']')
            {
                while(Top() != '(' || Top() != '{' || Top() != '[')
                {
                    Add(Top());
                    Pop();
                }
                Pop();

            }
            else if(array[i] == '+' || array[i] == '-')
                {
                    if( Top() == '*' || Top() == '/')
                    {
                        while(top != NULL)
                        {
                            Add(Top());
                            Pop();
                        }
                        Push(array[i]);
                    }else
                    {
                    Push(array[i]);
                    }
                }else if(array[i] == '*' || array[i] == '/')
                {
                Push(array[i]);
                }
        }
        
    }
    while(IsEmpty()!= true)
    {
        Add(Top());
        Pop();
    }
}

void Print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf(" %c ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    top = NULL;
    head = NULL;
    int length = strlen(array);
    InfixToPostfix(length);
    Print();
    return 0;
}