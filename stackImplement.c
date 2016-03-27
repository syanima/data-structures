#include <stdio.h>
#include "stack.h"

int main(){
	Stack *stack;
	initialiseStack(stack);
	push(stack,100);
	push(stack,200);
	push(stack,300);
	push(stack,400);
	push(stack,500);
	printStack(*stack);

	printf("length of stack %d\n",stack->length);

	pop(stack);
	pop(stack);
	pop(stack);
	printStack(*stack);

	printf("length of stack %d\n",stack->length);

	return 0;
};