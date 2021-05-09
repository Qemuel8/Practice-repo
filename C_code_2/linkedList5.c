#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* Insert(struct Node* head, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1->data = n;
    if(head == NULL)
    {   
        head = temp1;
        temp1->next = NULL;
        return head;
    }else
    {
        while(temp1->next!=NULL)
        {
            temp1 = temp1->next;
        
        }
        temp2->next = temp1; 
        temp1->data = n;
        
    }
    return head;
}
void Reverse(struct Node* head, struct Node* p)
{
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    Reverse(head, p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}
void Print(struct Node* head)
{
    if(head->next == NULL)
    {
        printf("\n");
        return;
    }
    printf("%d", head->data);
    Print(head->next);
}

int main()
{
    int n;
    struct Node* head = NULL;
    for(int i = 0;i<5;i++)
    {
        printf("Please enter a number to add:");
        scanf("%d",&n);
        head = Insert(head, n);
    }
    Print(head);

    return 0;
}
