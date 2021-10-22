#include<stdio.h>
#include<stdlib.h>
struct Node //Decleration of the tree Node;
{
    char data;
    struct Node* left;
    struct Node* right;
};

struct QNode // decleration of the Queue Node;
{
    struct Node* data;
    struct QNode* next;
};

struct QNode* head = NULL;
struct QNode* tail = NULL;

struct Node* MakeNewNode(char data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct QNode* MakeNewQNode(struct Node* data)
{
    struct QNode* newNode = (struct QNode*)malloc(sizeof(struct QNode*));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void Enqueue (struct Node* data)
{
    struct Node* newNode = MakeNewQNode(data);
    if(head == NULL && tail == NULL)
    {
        head = tail = newNode;
        return;
    }else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void Dequeue()
{
    struct QNode* temp = head;
    if(head == NULL && tail == NULL) return;
    if(head == tail) 
    {
        head = tail = NULL;
    }else{
    head->next = head;
    }
    free(temp);
    
}

void LevelOrder(struct Node *root)
{
    if(root == NULL) return;
}

int main()
{

struct Node* root = NULL;
    return 0;
}