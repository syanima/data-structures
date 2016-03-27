#include <stdio.h>
#include "que.h"

int main(void){
	Queue * queue;
	initialiseQueue(queue);
	enqueue(queue,61);
	enqueue(queue,62);
	enqueue(queue,63);
	enqueue(queue,64);
	enqueue(queue,65);
	enqueue(queue,66);
	printf("length of the queue is : %d\n",queue->length);

	printQueue(* queue);

	dequeue(queue);
	dequeue(queue);
	dequeue(queue);

	printf("length of the queue is : %d\n",queue->length);
	printQueue(* queue);

	return 0;
}
