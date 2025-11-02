#include "push_swap.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strisdigit(char *str)
{
	int	i;

	i = 0;
	if (!*str)
		exit(0);
	while(str[i])
	{
		if (!ft_isdigit(str[i++]))
			exit(0);
	}
	return (1);
}

int	check_arg(char **argv)
{
	int	i;

	i = 1;
	while (argv[i] != NULL)
	{
		if (!ft_strisdigit(argv[i]) || !str_is_int(argv[i++]))
			exit(0);
	}
	return (1);
}

stacks_t	*init_stacks(int argc, char **argv)
{
	stacks_t	*stacks;

	stacks = malloc(sizeof(stacks_t));
	stacks->a = malloc(sizeof(int) * argc - 2);
	stacks->b = malloc(sizeof(int) * argc - 2);
	stacks->sizea = 0;
	stacks->sizeb = 0;
	
	return (stacks);
}

void	print_stacks()
{
}

int	main(int argc, char **argv)
{
	stacks_t	*stacks;

	if (argc <= 2 || !check_arg(argv))
		return (0);
	stacks = init_stacks(argc, argv);
	free_stack();
	//stack_a = parse_arg(argv);
	//sort_stacks(stack_a);
	printf("ok");
	return (0);
}
