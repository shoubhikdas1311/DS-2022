#include <stdio.h>
#define MAX_Count		100
int isEmpty(char * stk, int * tos)
{
	return ((*tos) > 0);
}
void push(char * stk, int * tos, char val)
{
	stk[(*tos)] = val;
	/*
			OR

	scanf(" %c", (char *)(stk+(*tos)));
	Can use another function that writes to stk
	*/
	(*tos)--;
}
char pop(char * stk, int * tos)
{	
	char ret;
	ret = stk[(*tos)+1];// tos+1 to cancel out the old degradation 
	stk[(*tos)] = 0;// freeing up the space	
	(*tos)++;
	return ret;
}
int main()
{
	int sz = 0, tos = 0, Max_sz = 0, i = 0;
	int * tos_ptr = &tos;

	char arr[MAX_Count];
	char arr2[MAX_Count];
	/*
	printf("Enter the size\n");
	scanf("%d", &Max_sz);
	*/
	tos = Max_sz;
	push(arr, tos_ptr, '1');
	push(arr, tos_ptr, '2');
	push(arr, tos_ptr, '3');
	printf("%d\n", tos);
	printf("%d\n", isEmpty(arr, tos_ptr));
	printf("The End");
	return 0;
}
