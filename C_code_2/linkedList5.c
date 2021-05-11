#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* head = NULL;

struct Node* Insert(struct Node* head, int n)
{
    struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node*));
    temp1->data = n;
    if(head == NULL)
    {   
        head = temp1;
        return head;
    }else
    {   struct Node* temp2 = head;
        while(temp2->next!=NULL)
        {
             temp2 = temp2->next;
        
        }
        temp2->next = temp1; 
        temp1->next = NULL; 
        
    }
    return head;
}
void Reverse(struct Node* p)
{   
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

void Print(struct Node* head)
{
    if(head->next == NULL)
    {
        printf("%d ", head->data);
        printf("\n");
        return;
    }
    printf("%d ", head->data);
    Print(head->next);
}

int main()
{
    int n;
    for(int i = 0;i<5;i++)
    {
        printf("Please enter a number to add:");
        scanf("%d",&n);
        head = Insert(head, n);
    }
    Print(head);
    Reverse(head);
    Print(head);

    return 0;
}
