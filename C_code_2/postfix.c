#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

char MyExp[] = {"23*5+"};
struct Node
{
    int  data;
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
    if(top == NULL)
    {
        top = newNode;
        return;
    }
    newNode->link = top;
    top = newNode;
}

int  Pop()
{
    if(top != NULL)
    {
        struct Node* temp;
        temp = top;
        top = top->link;
        return temp->data;
    }
}     

struct Node* Top()
{
    return top;
}


int Perform(char x, int a, int b)
{
     if(x == '*')
    {
        return a * b;
    }
    else if( x == '/')
    {
        return  a / b;    
    }
    else if(x == '+')
    {
        return a + b;
    }
    else if(x == '-')
    {
        return a - b;
    }
}


struct Node* EvaluatePostfix()
{
    int num, op1, op2, res;
    int a = strlen(MyExp);
    for(int i = 0;i<a;i++)
    {
        if(isdigit(MyExp[i]))
        {
            num = MyExp[i] - 48;
            Push(num);
        }
        else if(MyExp[i] == '*' || MyExp[i] == '/'|| MyExp[i] == '+' || MyExp[i] == '-')
        {
            op2 = Pop();
            op1 = Pop();
            res = Perform(MyExp[i],op1,op2);
            Push(res);
        }
    }
    return Top();
}


int main()
{
    top = NULL;
    struct Node* temp = EvaluatePostfix();
    printf("%d", temp->data);
    return 0;
}

