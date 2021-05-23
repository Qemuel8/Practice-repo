#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

char MyExp[][20] = {"()"};

struct Node
{
    char data;
    struct Node* link;
};
struct Node* head;

struct Node*  MakeNewNode(char x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = NULL;
}

void Push(char x)
{
   struct Node* newNode = MakeNewNode(x);
   newNode->link = head;
   head = newNode;
}

struct Node* Top()
{
    return head;
}

void Pop()
{
    if(head!=NULL)
    {
    struct Node* temp = head;
    head = head->link;
    free(temp);
    }
}

bool IsEmpty()
{
    if(head!=NULL )
    {
        return false;
    }else
    {
        return true;
    }
}
void CheckExp(int a)
{
    for(int i = 0;i<a-1;i++)
    {
        if(MyExp[i] == "(" || MyExp[i] == "[" || MyExp[i] == "{")
        {
            Push(MyExp[i]);
        }else if(MyExp[i] == ")" || MyExp[i] == "]" || MyExp[i] == "}")
        {
            if(IsEmpty==true || head != MyExp[i])
            {
                return false;
            }
            else
            {
                Pop();
            }
        }
    }
    if(IsEmpty() == true)
    {
        return true;
    }else
    {
        return false;
    }
}


int main()
{
    head = NULL;
    
        CheckExp(strlen(MyExp));   
    
    return 0;
}
