typedef struct {
	int value;		
	void *next;
} Element;

typedef struct {
	Element *first;
	Element *last;	
	int length;
} List;

void initialiseList(List *list);
void pushElement(List *list,int data);
void printList(List list);