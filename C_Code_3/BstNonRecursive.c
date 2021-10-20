#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct BstNode
{
    int data;
    struct BstNode* left;
    struct BstNode* right;
};

struct BstNode* MakeNewNode(int data)
{
    struct BstNode* newNode = (struct BstNode*)malloc(sizeof(struct BstNode*));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct BstNode* Insert(struct BstNode* root, int data)
{
    if(root == NULL)
    {
        root = MakeNewNode(data);
        return root;
    }
    struct BstNode* temp = root;
    while(temp->data != data)
    {
    if(temp->left == NULL && data <= temp->data )
    { temp->left = MakeNewNode(data);
    }
    else if(temp->right == NULL && data >= temp->data) 
    {
        temp->right = MakeNewNode(data);
    }
    else if(data <= temp->data)
    {
        temp = temp->left;
    }else
    {
        temp = temp->right;
    }
    }
    return root;

}

bool Search(struct BstNode* root, int data)

{
    if(root == NULL) return false;
    if(root->data == data) return true;
    else if(data <= root->data) return Search(root->left,data);
    else return Search(root->right,data);
}


int main()
{
    struct BstNode* root = NULL;
    root = Insert(root, 10);
    root = Insert(root, 15);
    root = Insert(root, 20);
    root = Insert(root, 25);
    root = Insert(root, 8);

    int number;
    printf("Please enter a number: \n");
    scanf("%d", &number);
    if(Search(root, number) == true) printf("Found!\n");
    else printf("Not found!");

    

    return 0;

}