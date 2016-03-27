typedef struct {
	int value;		
	void *next;
} Element;

typedef struct {
	Element *first;
	Element *last;	
	int length;
} Queue;

void initialiseQueue(Queue *queue);
void enqueue(Queue *Queue,int data);
void dequeue(Queue *Queue);
void printQueue(Queue queue);