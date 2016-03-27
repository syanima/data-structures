#include <stdio.h>
#include "linkedList.h"


int main(void){
	List * list;
	initialiseList(list);
	pushElement(list,67);
	pushElement(list,62);
	pushElement(list,64);
	pushElement(list,69);
	pushElement(list,60);
	pushElement(list,61);

	printList(* list);
	printf("length of list is : %d\n",list->length);
	return 0;
}
