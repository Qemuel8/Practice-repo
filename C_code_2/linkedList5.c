#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    Node* next;
};
struct Node* head;
void Reverse(struct Node* p)
{
    if(p->next == NULL)
    {
        head = p;
        return;
    }
    reverse(p->next);
}


int main()
{



    return 0;
}
