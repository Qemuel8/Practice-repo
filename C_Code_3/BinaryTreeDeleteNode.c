#include<stdio.h>
#include<stdlib.h>


struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* MakeNewNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node*));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
} 



struct Node* Insert(struct Node* root, int data )
{
    if(root == NULL)
    {
        root = MakeNewNode(data);
    }
    else if(data <= root->data)
    {
        root->left = Insert(root->left, data);
    }else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}



void Inorder(struct Node* root)
{
    if(root == NULL)
    { 
    return;
    }
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}


struct Node* FindMin(struct Node* root)
{
    struct Node* current = root;
    if(root == NULL)
    {
        return 0;
    }
    while(current->left != NULL)
    {
        current = current->left;
    }
    return current;
}

struct Node* Delete(struct Node* root, int data)
{
    if(root == NULL) {
        return root;
        }
    else if(data < root->data) 
    {
        root->left =  Delete(root->left,data);
    }
    else if(data > root->data) 
    {
        root->right = Delete(root->right, data);
    }
    else// this is the moment we found the node we want to delete
    {
        //case 1: No child:
        if(root->left == NULL && root->right == NULL)
        {
            free(root);
            root = NULL;
        }
        //case 2 One child:
        else if( root->left == NULL)
        {
            struct Node* temp = root;
            root = root->right;
            free(temp);
        }else if( root->right == NULL)
        {
            struct Node* temp = root;
            root = root->left;
            free(temp);
        }
        else
        {
            struct Node* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }

    }
    return root;
}



int main()
{
    struct Node* root = NULL;
    root = Insert(root, 3);
    root = Insert(root, 7);
    root = Insert(root, 12);
    root = Insert(root, 8);
    root = Insert(root, 4);
    root = Insert(root, 22);
    printf("before: ");
    Inorder(root);
    Delete(root, 12);
    printf("\n after: ");
    Inorder(root);
    return 0;
}