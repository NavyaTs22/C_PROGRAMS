#include <stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node *next;
};

struct Node *insert_bg(struct Node *head, int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=head;
    head=newNode;
    return head;
}

struct Node *insert_ed(struct Node *head,int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    
 if(head==NULL) {
     return newNode;
 }
    
    struct Node *temp=head;
    while(temp->next!=NULL) {
     temp = temp->next;
     }
    temp->next=newNode;

    return head;
}

struct Node *delete_node(struct Node *head, int data)
{
    struct Node *temp=head;
    struct Node *prev=NULL;
    
    if(head==NULL){
        printf("list empty\n");
        return head;
    }
    
    if(temp!=NULL && temp->data==data) {
        head=temp->next;
        free(temp);
        return head;
    }
    
    while(temp!=NULL && temp->data!=data) {
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL) {
    printf("element not found");
    return head;
    }
    prev->next=temp->next;
    free(temp);
    return head; 

}

void traverse(struct Node *head){
    struct Node *temp=head;
    if(temp==NULL){
        printf("this list is empty\n");
        return;
    }
    printf("linked list:");
     while(temp!=NULL)
     {
         printf("%d->",temp->data);
         temp=temp->next;
     }   
  printf("null\n");
}
    
 int main() 
 {
     struct Node *head=NULL;
     
     head=insert_bg(head,10);
     head=insert_bg(head,20);
     head=insert_ed(head,30);
     head=insert_ed(head,30);
     
     traverse(head);
     
     head=delete_node(head,20);
     traverse(head);
     
     return 0;
 }   
    
    OUTPUT :
linked list:20->10->30->30->null
linked list:10->30->30->null
    
    
    
















