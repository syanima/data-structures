#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initialiseStack(Stack *stack){
	stack->first = stack->last = NULL;
	stack->length = 0;
};

void push(Stack *stack,int data){
	Element *ptr;
	ptr = (Element *)malloc(sizeof(Element));
	ptr->value = data;
	ptr->prev = NULL;
	if(stack->length == 0){
		stack->first = stack->last = ptr;
	}else{
		ptr->prev = stack->last;
		stack->last = ptr;
	};
	stack->length++;
};

void pop(Stack *stack){
	if(stack->length==0){
		printf("you can't pop anymore..no elements left\n");
	}else{
		stack->last = stack->last->prev;
	};
	stack->length--;
};

void printStack(Stack stack){
	while(stack.last!=NULL){
		printf("%d\n",stack.last->value);
		stack.last = stack.last->prev;
	};
};
