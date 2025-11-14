#include "push_swap.h"

void	print_stack(t_allstacks stack)
{
	printf("===STACK A===\n");
	printf("size a : %d\n", stack.a.size);
	print_int_tab(stack.a.tab, stack.a.size);
	printf("===STACK B===\n");
	printf("size b : %d\n", stack.b.size);
	print_int_tab(stack.b.tab, stack.b.size);
}

void	print_int_tab(int *tab, int size)
{
	int	i;

	i = size;
	while (--i >= 0)
		printf("tab [%d] : %d\n", i, tab[i]);
}

void	print_args(char **args)
{
	int	i;

	i = -1;
	while (args[++i])
		printf("args[%d] : %s\n", i, args[i]);
}

