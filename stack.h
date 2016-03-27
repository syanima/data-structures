typedef struct {
	int value;
	void *prev;
} Element;

typedef struct {
	Element *first;
	Element *last;
	int length;
} Stack;

void initialiseStack(Stack *stack);
void push(Stack *stack,int data);
void pop(Stack *stack);
void printStack(Stack stack);