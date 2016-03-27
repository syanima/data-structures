#include <stdio.h>
#include "queue.h"

int main(void){
	int choice;
     front=NULL;
     printf(" \n1. Push to Queue");
     printf(" \n2. Pop from Queue");
     printf(" \n3. Display Data of Queue");
     printf(" \n4. Exit\n");
     while(1){
          printf(" \nChoose Option: ");
          scanf("%d",&choice);
          switch(choice){
                case 1:{
                     int value;
                     printf("\nEnter a value to push into Queue: ");
                     scanf("%d",&value);
                     enque(value); 
                     display();
                     break;
                }
                case 2:{
                     dequeue();
                     display();
                     break;
                }
                case 3:{
                     display();
                     break;
                }
                case 4:{
                     exit(0);
                }
                default:{
                     printf("\nwrong choice for operation");
                }
          }
     }
 }	   