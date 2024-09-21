#include <stdio.h>
#include <stdbool.h>

void push(int** tos, int val)
{
	++(*tos);
	**tos = val;
}

void pop(int** tos)
{
	printf("%d\n",**tos);
	--(*tos);
}

void peek(int* tos)
{
	 printf("%d\n",*tos);
}

bool check_push(int* tos, int stack_size, int* stack_bottom)
{
	if ( stack_size  == (tos - stack_bottom))
		return false;
	else 
		return true;
}

bool check_pop(int* tos, int* stack_bottom)
{
	if( tos == stack_bottom)
		return false;
	else 
		return true;
}

/*int main()
{
	int array[5];
	int* ptr = array;

	//test check_push.......................................
	if (check_pop(array,--ptr))
		printf("yes");
	else
		printf("no");

	//printf("\n%d",*(--ptr));

}

*/






