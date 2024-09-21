#include <stdio.h>

//queue state
int state = 0;

//struture of a node

typedef struct Data_Node{

	int data;
	struct Data_Node* next; //points to the next node
}NODE;

//make the nodes
 
NODE N1,N2,N3,N4,N5;

//temporary pointer holder
NODE* temp;



void enqueue(NODE** last, NODE** first, int value)
{

	if (    (  (*last)->next == (*first) )  && state == 0   )
	{
		(*last)->data = value;
		state = 1;//slots full
		printf("%d entered to queue\n",value);
	}
	else if ( state == 0 )
	{
		(*last)->data = value;
		temp = (*last)->next;
	      	*last = temp;
		printf("%d entered to queue\n",value);

	}
	else
		printf("Queue is full\n");	


}

void dequeue(NODE** last, NODE** first)
{
	if ( *first == *last )
	{
		printf("Queue is empty\n");
	}
	else 
	{
		printf("%d is removed from queue\n", (*first)->data );
		temp = (*first)->next;
		*first = temp;
		state = 0; //slot available
	}


}

			

int main()
{
	//link the nodes
	N1.next = &N2; N2.next = &N3; N3.next = &N4; N4.next = &N5; N5.next = &N1; //circular
	
	NODE* first = &N1;

	NODE* last = &N1;

	 // Test enqueue
	dequeue(&last, &first);
    	enqueue(&last, &first, 10);
    	enqueue(&last, &first, 20);
    	enqueue(&last, &first, 30);
   	dequeue(&last, &first);
     	dequeue(&last, &first);
    	enqueue(&last, &first, 3);
	enqueue(&last, &first, 20);
	enqueue(&last, &first, 5000);
	enqueue(&last, &first, 40);
	enqueue(&last, &first, 100);



    // Check the values in the queue
    printf("Queue after enqueue:\n");
    NODE* temp = first;
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != first);
    printf("\n");
}	
										   

