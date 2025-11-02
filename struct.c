#include "push_swap.h"

stacks_t	*init_stacks(int argc, char **argv)
{
	int	i;
	stacks_t	*stacks;

	i = 0;
	stacks = malloc(sizeof(stacks_t));
	stacks->a = malloc(sizeof(int) * (argc - 1));
	if (stacks->a == NULL)
		free(stacks);
	while (i < argc - 1)
		stacks->a[i++] = -1;
	i = 0;
	stacks->b = malloc(sizeof(int) * (argc - 1));
	if (stacks->a == NULL)
	{
		free(stacks->a);
		free(stacks);
	}
	while (i < argc - 1)
		stacks->b[i++] = -1;
	stacks->sizea = argc - 1;
	stacks->sizeb = argc - 1;
	(void)argv;	//fill struct with argv
	return (stacks);
}

void	free_stacks(stacks_t *stacks)
{
	free(stacks->a);
	free(stacks->b);
	free(stacks);
}

