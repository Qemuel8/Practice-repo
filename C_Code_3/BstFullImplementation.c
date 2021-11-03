#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct QNode
{
    struct BstNode* data;
    struct Qnode* next;
};

struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct Node
{
    struct BstNode* data;
    struct Node* next;
};

struct Node* top = NULL;
struct QNode* head = NULL;
struct QNode* tail = NULL;


struct BstNode* MakeNewBstNode()
{
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode*));
    newNode->data = NULL;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BstNode* Insert(struct BstNode* root, int data)
{
    if(root == NULL)
    {
        struct BstNode* newNode = MakeNewBstNode(data);
        root = newNode;
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }else
    {
        root->right = Insert(root->right,data);
    }
    return root;
}

 struct BstNode* RemoveBstNode(struct BstNode* root, int data)
{
    if(root == NULL) return root;
    if(data < root->data)
    {
        root = RemoveBstNode(root->left,data);
    }else if(data > root->data)
    {
        root = RemoveBstNode(root->right,data);
    }
    
}


struct QNode* MakeNewQNode()
{
    struct QNode* newNode = (struct QNode*)malloc(sizeof(struct QNode*));
    newNode->data = NULL;
    newNode->next = NULL;
    return newNode;
}

bool IsQeueueEmpty()
{
    if(head == NULL && tail == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}

void Enqueue(struct BstNode* data)
{
    struct QNode* newNode = MakeNewQNode();
    if(head == NULL && tail == NULL)
    {
        head = tail = newNode;
        return;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

struct BstNode* Front()
{
    if(head == NULL) return 0;
    return head->data;
}

void Dequeue()
{
    if(head == NULL && tail == NULL) return;
    struct QNode* temp = head;
    if(head == tail)
    {
        head == tail == NULL;
        free(temp);
        return;
    }else
    {
        head = head->next;
        free(temp);
        return;
    }
}


struct Node* MakeNewNode()
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = NULL;
    newNode->next = NULL;
    return newNode;
}

void Add(int data)
{
    struct Node* newNode = MakeNewNode(data);
    if(top == NULL)
    {
        top = newNode;
        return;
    }else
    {
        struct Node* temp = top;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        return;
    }
}

int Top()
{
    if(top == NULL) return 0;
    struct Node* temp = top;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}

void Pop()
{
    if(top == NULL) return 0;
    struct Node* temp = top;
    while(temp->next != NULL)
    {
     temp = temp->next;   
    }
    free(temp);
}

bool IsStackEmpty()
{
    if(top != NULL)
    {
        return false;
    }
    else
    {
        return true;
    }
}



int main()
{
    struct BstNode* root = NULL;

    return 0;

}