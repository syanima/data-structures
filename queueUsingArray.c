#include <stdio.h>
#include <stdlib.h>
#include "queueUsingArray.h"


int main(void){
    int choice;

    while (1){
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice){
            case 1:
            	enqueue();
            	break;
            case 2:
            	dequeue();
            	break;
            case 3:
            	printQueue();
            	break;
            case 4:
            	exit(0);
            default:
            	printf("Wrong choice \n");
        } 
    } 
}


