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
    temp1->next = NULL;
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
        
        
    }
    return head;
}
struct Node* Reverse(struct Node* head)
{   
    struct Node* temp1;
    if(temp1!=head)temp1=head;
    if(temp1->next == NULL)
    {
        head = temp1;
        return head;
    }
    Reverse(temp1->next);
    struct Node* q = temp1->next;
    q->next = temp1;
    temp1->next = NULL;
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
    struct Node* head = NULL;
    for(int i = 0;i<5;i++)
    {
        printf("Please enter a number to add:");
        scanf("%d",&n);
        head = Insert(head, n);
    }
    Print(head);
    struct Node* reversedHead = Reverse(head);
    Print(reversedHead);

    return 0;
}
