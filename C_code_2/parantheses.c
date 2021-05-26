#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

char MyExp[] = {"[()()]"};

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
void Print()
{
    struct Node* temp = head;
    while(temp!=NULL)
    {
       printf("%c", temp->data);
        temp = temp->link;
    }
}
                
bool IsEmpty()
{
    if(head==NULL )
    {
        return true;
    }else
    {
        return false;
    }
}

bool CheckExp(int a)
{
    for(int i = 0;i<a;i++)
    {
        if(MyExp[i] == '(' || MyExp[i] == '[' || MyExp[i] == '{')
        {
            Push(MyExp[i]);
            Print();
            printf("%d", i);
            printf("%c ,, ", MyExp[i]);
        }else if( MyExp[i] == ')')
        {
            if(head == NULL)
            {
                return false;
            }else if( head->data != '(')
            {
                return false;
            }else
            {
               Pop();
            }
        }else if( MyExp[i] == '}')
        {
            if(head == NULL)
            {
                return false;
            }else if( head->data != '{')
            {
                return false;
            }else
            {
               Pop();
            }
        }else if( MyExp[i] == ']')
        {
            if(head == NULL)
            {
                return false;
            }else if( head->data != '[')
            {
                return false;
            }else
            {
               Pop();
            }
        }
            Print();
            printf("%d", i);
            printf("%c ,, ", MyExp[i]);
    }
    if(head==NULL)
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
      int a = strlen(MyExp);
      printf("strlen = %d", a);
      
      bool p =  CheckExp(a);   
      if(p == true)
      {
          printf("true");
      }else
      {
          printf("false");
      }  

    return 0;
}

