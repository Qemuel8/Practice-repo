#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//remember to comment your code before you leave!

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

struct Node* Front()
{
    if(head != NULL)
    {
    return head->data;
    }
}


void Enqueue (struct Node* data)
{
    struct QNode* newNode = MakeNewQNode(data);
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
    }else
    {
    head = head->next;
    }
    free(temp);
    
}
bool IsEmpty()
{
    if(head == NULL && tail == NULL)
    {
        return true;
    }else
    {
        return false;
    }
}

struct Node* Insert(struct Node* root, char data)
{
    if(root == NULL)
    {
        root = MakeNewNode(data);
    }else if(data <= root->data)
    {
        root->left = Insert(root->left,data);
    }else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

void LevelOrder(struct Node *root)
{
    if(root == NULL) return;
    Enqueue(root);
    while(!IsEmpty())
    {
        struct Node* current = Front();
        printf("%c", current->data);
        if(current->left != NULL) Enqueue(current->left);
        if(current->right != NULL) Enqueue(current->right);
        Dequeue();
    }
}

bool IsSubtreeLesser(struct Node* root, char value)
{
    if(root == NULL) return true;
    if(root->data <= value) 
    {
        return true;
    }else
    {
    return false;
    }
}
bool IsSubtreeGreater(struct Node* root, char value)
{
    if(root == NULL) return true;
    if(root->data > value) 
    {
        return true;
    }else
    {
    return false;
    }
}

bool IsBinarySearchTree(struct Node* root)
{
    if(root == NULL) return true;
    if(IsSubtreeLesser(root->left,root->data) && IsSubtreeGreater(root->right, root->data))
    {
            if(IsBinarySearchTree(root->left) && IsBinarySearchTree(root->right))
            {
                return true;
            }
    }
    return false;
}

int main()
{

struct Node* root = NULL;
root = Insert(root, 'a');
root = Insert(root, 'b');
root = Insert(root, 'c');
root = Insert(root, 'd');
root = Insert(root, 'e');

LevelOrder(root);
printf("\nIs it a binary search tree?\n ");
if(IsBinarySearchTree(root))
{
    printf("True\n");
}else{
    printf("False\n");
}
if('a' < 'b') printf("asdasd");

    return 0;
}   