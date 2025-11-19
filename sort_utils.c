#include "push_swap.h"

int		ft_issorted(t_allstacks *stacks)
{
	int i;

	i = 0;
	while (i < stacks->a.size - 1)
	{
		if (stacks->a.tab[i] < stacks->a.tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	get_pos(int *stack, int size, int num)
{
	int	i;

	i = 0;
	while (i < size && stack[i] != num)
		i++;
	return (i);
}
