#include <stdio.h>
#define MAX 5

int queue[MAX];
int front=-1;
int rear=-1;

void enqueue(int x) {
    
    if(rear==MAX-1) {
        printf("queue overflow\n");
    }
    else {
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=x;
        printf("%d enqueued \n",x);
    
    }
}

void dequeue() {
    if(front==-1||front>rear) {
        printf("queue underflow\n");
    }
    else {
        printf("%d dequeued \n",queue[front]);
        front++;
    }
}

void peek() {
    if(front==-1||front>rear) {
        printf("queue empty\n");
    }
    else {
        printf("peek--front element is %d \n",queue[front]);
    }
    
}

void display() {
    if(front==-1 || front>rear) {
        printf("queue is empty");
    }
    else {
        printf("queue elements:");
        for(int i=front;i<=rear;i++) {
         printf("%d",queue[i]);
        }
        printf("\n");
    }
}


int main() {
    
enqueue(1);
enqueue(2);
enqueue(3);
enqueue(4);
dequeue();
peek();

return 0; 
}  


OUTPUT : 
1 enqueued 
2 enqueued 
3 enqueued 
4 enqueued 
1 dequeued 
peek--front element is 2 


=== Code Execution Successful ===
