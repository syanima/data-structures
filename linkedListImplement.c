#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"

void initialiseList(List *list){
	list->first = NULL;
	list->last = NULL;
	list->length = 0;
}

void pushElement(List *list,int data){
	Element *ptr;
	ptr = (Element *) malloc(sizeof(Element));
	ptr->value = data;
	ptr->next = NULL;

	if(list->length==0){
		list->first = ptr;
		list->last = ptr;
	}
	else{
		list->last->next = ptr;
		list->last = ptr;
	}
	list->length++;
}

void printList(List list){
	while(list.first != NULL){
		printf("%d\n",list.first->value);
		list.first = list.first->next;
	}
}