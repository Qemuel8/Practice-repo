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


struct Node* Insert(struct Node* root, int data)
{
    
    if(root == NULL)
    {
        root = MakeNewNode(data);
        
    }else if(data <= root->data)
    {
        root->left = Insert(root->left, data);
    }else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}

struct Node* Find(struct Node* root, int data)
{
    if(root == NULL) return NULL;
    if(data < root->data)
    {
        Find(root->left, data);
    }else if(data > root->data)
    {
        Find(root->right, data);
    }
    else
    {
        return root;
    }
}

struct Node* FindMin(struct Node* root)
{
    if(root == NULL) return NULL;
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
}


struct Node* GetSuccessor(struct Node* root, int data)
{
    //searcj the Node - O(h)
    struct Node* current = Find(root,data);
    if(current == NULL) return NULL;
    if(current->right != NULL)
    {
        return FindMin(current->right);
    }
    else
    {
        struct Node* successor = NULL;
        struct Node* ancestor = root;
        while( ancestor != current)
        {
            if(current->data < ancestor->data)
            {
                successor = ancestor;
                ancestor = ancestor->left;
            }
            else
            {
                ancestor = ancestor->right;
            }
        }
        return successor;
    }

}


void Inorder(struct Node* root)
{
    if(root == NULL) return;
    Inorder(root->left);
    printf("%d ", root->data);
    Inorder(root->right);
}





int main()
{
    struct Node* root = NULL;
    root = Insert(root, 1);
    root = Insert(root, 2);
    root = Insert(root, 3);
    root = Insert(root, 5);
    root = Insert(root, 8);
    root = Insert(root, 11);
    root = Insert(root, 18);
    root = Insert(root, 42);

    Inorder(root);
    int num = 5;
   printf("The successor of %d is %d", num, GetSuccessor(root, num)->data);

    return 0;
}