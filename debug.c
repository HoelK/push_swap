#include "push_swap.h"
#include <stdio.h>

void	print_stacks(stacks_t *stacks)
{
	int	i;

	i = 0;
	while (i < stacks->sizea || i < stacks->sizeb)
	{
		printf("%d	|	%d\n", stacks->a[i], stacks->b[i]);
		i++;
	}
	printf ("a	|	b\n");
}

