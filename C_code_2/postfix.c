#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include<ctype.h>
#include<string.h>

char MyExp[] = {"23*"};

struct Node
{
    char  data;
    struct Node* link;
};

struct Node* top;

struct Node* MakeNewNode(char x)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = NULL;
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
    newNode->link = top;
    top = newNode;
}

char  Pop()
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


char Perform(char x, char a, char b)
{
    int num1, num2, res;
    num1 = atoi(&a);
    num2 = atoi(&b);
    char result;
    if(x == '*')
    {
        res = num1 * num2;
        sprintf(result, "%d", res);
        return result;
    }
    else if( x == '/')
    {
        res = num1 / num2;
        sprintf(result, "%d", res);
        return result;
    }
    else if(x == '+')
    {
        res = num1 + num2;
        sprintf(result, "%d", res);
        return result;
    }
    else if(x == '-')
    {
        res = num1 - num2;
        sprintf(result, "%d", res);
        return result;
    }
}


struct Node* EvaluatePostfix()
{
    int a = strlen(MyExp);
    for(int i = 0;i<a;i++)
    {
        if(isdigit(MyExp[i]) == true)
        {
            Push(MyExp[i]);
        }
        else if(MyExp[i] == '*' || MyExp[i] == '/'|| MyExp[i] == '+' || MyExp[i] == '-')
        {
            char op2 = Pop();
            char op1 = Pop();
            char res[10];
            res[0] =  Perform(MyExp[i],op1,op2));
            Push(res[0]);
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

