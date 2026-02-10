#include <stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *top = NULL;

int empty() {
    return top==NULL;
}
void push(int data) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
if (newNode==NULL){
    printf("stack overflow\n");
    return;
}
 
newNode->data = data;
newNode->next = top;
top = newNode;
printf("%d pushed \n",data);
}
int pop() {
    if(empty())
    {
        printf("stack underflow");
        return -1;
    }
struct Node *temp=top;
int var=temp->data;
top = top->next;
free(temp);
return  var;

}

int peek()
{
    if(empty())return -1;
    return top->data;
    
}
    
int main()
{
    push(10);
    push(20);
     push(30);
        
    printf("top =%d\n",peek());
    printf("popped =%d\n",pop());
    printf("popped =%d\n",pop());
}
    
    
OUTPUT :

10 pushed 
20 pushed 
30 pushed 
top =30
popped =30
popped =20
