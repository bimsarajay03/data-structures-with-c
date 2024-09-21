#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include<unistd.h>
#include <stdlib.h>

void push(int** tos, int val);
bool check_push(int* tos, int stack_size, int* stack_bottom);
void pop(int** tos);
bool check_pop(int* tos, int* stack_bottom);
void peek(int* tos);


int main()
{


	//crate the stack
	int stack_size;
	printf("Enter size of stack = ");
	scanf("%d",&stack_size);
	int stack[stack_size];

	int input = 3;

	int* tos = stack;
	--tos;

	int* stack_bottom = tos ;

	bool active = true;

	char command[10];




	while( active  )
	{

		//get the command
		printf("command\n");
		scanf("%s %d",command, &input);
//
//	
//		
		if( strcmp(command, "push") == 0  )
		{
		    if( check_push(tos, stack_size, stack_bottom )  )	
		      push(&tos, input );
		    else
		      printf("Stack is full\n");
		}
		   

		if( strcmp(command, "pop") == 0  )
                {
                    if( check_pop(tos, stack_bottom  ))
                      pop(&tos);
                    else
                      printf("Stack is empty\n");
                }

		if( strcmp(command, "peak") == 0  )
                {
		     if( check_pop(tos, stack_bottom  ))
                   	 peek(tos);
                }

		if( strcmp(command, "exit") == 0)
		       exit(0);	

		sleep(1);
	}

	
}

		   
