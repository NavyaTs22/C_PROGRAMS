#include <stdio.h>
#include <stdlib.h>

struct Treenode 
{
    int data;
    struct Treenode *left;
    struct Treenode *right;
};

//creation of new node

struct Treenode *createnode(int data)
{
    struct Treenode *newNode = (struct Treenode*)malloc(sizeof(struct Treenode));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
    
}

struct Treenode *insert(struct Treenode *root, int data){
    if(root==NULL){
        return createnode(data);
    }
    
    if(root->left==NULL){
        root->left=createnode(data);
    }
    else if(root->right==NULL){
        root->right=createnode(data);
    }
    else
    insert(root->left,data);
    
    return root;
}

void pre_order_traversal(struct Treenode *root){
    if(root!=NULL){
        printf("%d",root->data);
        pre_order_traversal(root->left);
        pre_order_traversal(root->right);
        
    }
}

int main(){
    struct Treenode *root = NULL;
    
    root = insert(root,10);
    insert(root,20);
    insert(root,30);
    insert(root,40);
    insert(root,50);
    
    printf("pre order traversal :");
    pre_order_traversal(root);
    
    return 0;
}

OUTPUT :
pre order traversal :1020405030

=== Code Execution Successful ===




