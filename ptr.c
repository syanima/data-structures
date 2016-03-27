#include <stdio.h>

void doSomething(int *a){
	*a=34;
}

int main(){
	int a=12;
	doSomething(&a);
	printf("%d\n",a);
}