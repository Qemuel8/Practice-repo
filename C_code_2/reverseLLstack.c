#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

struct Node
{
    int data;
    struct Node* link;
};

struct Node* head;

struct NodeP
{
    struct Node* data;
    struct NodeP* link;
};

struct NodeP* top;

void Add(int x, int y){
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = x;
    newNode->link = NULL;
    if(y == 1)
    {  
       struct Node* temp;
       if(head->link!=NULL)
       {
           temp = head;
           newNode->link = head->link;
       }
        head = newNode;
        free(temp);
        return;
    }
    struct Node* temp1;
    temp1 = head;
    for(int i = 0; i<y-2; i++)
    {
        temp1 = temp1->link;
    }
    struct Node* temp2;
    temp2 = temp1->link;
    temp1->link = newNode;
    if(temp2 == NULL) return;
        newNode->link = temp2->link;
        free(temp2);
}




void Print()
{
    struct Node* temp;
    temp = head;
    while(temp!=NULL)
    {
    printf("%d ", temp->data);
    temp = temp->link;
    }
    printf("\n");
}



void Push(struct Node* p)
{
    struct NodeP* newNode = (struct NodeP*)malloc(sizeof(struct NodeP*));
    newNode->data = p;
    newNode->link = top;
    top = newNode;
}

void Pop()
{
   struct NodeP* temp;
   temp = top;
   top = top->link;
   free(temp);
}

struct Node* Top()
{
    return top->data;
}

bool IsEmpty()
{
    if(top==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
void Reverse()
{
    struct Node* p;
    p = head;
    while(p != NULL)
    {
    Push(p);
    p = p->link;
    }
    while(IsEmpty() != true)
    {
        int i = 1;
        struct Node* temp;
        temp = Top();
        Add(temp->data, i);
        i++;
        Pop();
    }
}



int a;
int main()
{
    head = NULL;
    top = NULL;
    for(int i=1;i<=5;i++)
    {
        printf("Please Enter a Number: ");
        scanf("%d", &a);
        Add(a,i);
    }
    Print();
    Reverse();
    Print();



    return 0;
}

