#include <stdio.h>
#include <stdlib.h>
#include "que.h"

void initialiseQueue(Queue *queue){
	queue->first = NULL;
	queue->last = NULL;
	queue->length = 0;
}

void enqueue(Queue *queue,int data){
	Element *ptr;
	ptr = (Element *) malloc(sizeof(Element));
	ptr->value = data;
	ptr->next = NULL;

	if(queue->length==0){
		queue->first = ptr;
		queue->last = ptr;
	}
	else{
		queue->last->next = ptr;
		queue->last = ptr;
	}
	queue->length++;
}
void dequeue(Queue *queue){
	if(queue->length==0){
		printf("queue is already empty. you can't dequeue!");
	}
	else{
		queue->first = queue->first->next;
	}
	queue->length--;
}

void printQueue(Queue queue){
	while(queue.first != NULL){
		printf("%d\n",queue.first->value);
		queue.first = queue.first->next;
	}
}