#include <stdio.h>
#include "queueUsingArray.h"


void enqueue(){
    int data;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else{
        if (front == - 1)
        front = 0;
        printf("Insert the element in queue : ");
        scanf("%d", &data);
        rear = rear + 1;
        queue_array[rear] = data;
    }
} 
 
void dequeue(){
    if (front == - 1 || front > rear){
        printf("Queue Underflow \n");
        return ;
    }
    else{
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} 
void printQueue(){
    if (front == - 1)
        printf("Queue is empty \n");
    else{
        printf("Queue is : \n");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
} 