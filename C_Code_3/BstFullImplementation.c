#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct QNode // Queue node
{
    struct BstNode* data;
    struct Qnode* next;
};

struct BstNode // Binary Search tree Node 
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct Node // Node for stack
{
    struct BstNode* data;
    struct Node* next;
};
//creating node starts
struct Node* top = NULL;
struct QNode* head = NULL;
struct QNode* tail = NULL;

// Binary search tree node and its functions are starting here:

struct BstNode* MakeNewBstNode()
{
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode*));
    newNode->data = NULL;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* FindMin(struct Node* root)
{

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

 struct BstNode* Delete(struct BstNode* root, int data)
{
    if(root == NULL) return root;
    if(data < root->data)
    {
        root = Delete(root->left,data);
    }
    else if(data > root->data)
    {
        root = Delete(root->right,data);
    }else // since its not larger or smaller it has to be equal to data so we have found the node we needed in O(h)
    {
        if(root->right == NULL && root->left == NULL)
        {
            free(root);
            root == NULL; // the reason we are making root NULL after freeing it is because its a dangling root so its not going to be able to return anything
        }
        else if(root->right == NULL)//if right is null then left cant be null or else first condition would have been activated meaning no child node.
        {
            struct Node* temp = root;
            root = root->left;
            free(temp);
        }
        else if(root->left == NULL)
        {
            struct Node* temp = root;
            root = root->right;
            free(temp);
        }
        else// both left and right arent NULL recursion starts here 
        { 
            struct Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

//Queue Node fand its functions are starting here:

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

// Stack node and its functions start here:

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