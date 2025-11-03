#include "push_swap.h"

int	*int_to_index(int *stack, int size)
{

	int	i;
	int	j;
	int	min;
	int	*new_stack;

	i = 0;
	j = 0;
	min = 0;
	new_stack = malloc(sizeof(int) * size);
	if (new_stack == NULL)
		return (free(stack), NULL);
	while (i < size)
		new_stack[i++] = -1;
	i = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[j] < stack[min] && new_stack[j] == -1)
				min = j;
			j++;
		}
		new_stack[min] = i;
		min = ++i;
		j = 0;
	}
	free(stack);
	return (new_stack);
}
