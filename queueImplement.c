#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void dequeue(){
       struct Node *temp, *var=rear;
      if(var==rear){
             rear = rear->next;
             free(var);
      }
      else
      printf("\nQueue Empty");
}

void enque(int value){
     struct Node *temp;
     temp=(struct Node *)malloc(sizeof(struct Node));
     temp->Data=value;
     if (front == NULL){
           front=temp;
           front->next=NULL;
           rear=front;
     }
     else{
           front->next=temp;
           front=temp;
           front->next=NULL;
     }
}

void display(){
     struct Node *var=rear;
     if(var!=NULL){
           printf("\nElements are as:  ");
           while(var!=NULL){
                printf("\t%d",var->Data);
                var=var->next;
           }
     printf("\n");
     } 
     else
     printf("\nQueue is Empty");
}

