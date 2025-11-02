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
	int	i;
	stacks_t	*stacks;

	i = 0;
	stacks = malloc(sizeof(stacks_t));
	stacks->a = malloc(sizeof(int) * (argc - 1));
	while (i < argc - 1)
		stacks->a[i++] = -1;
	i = 0;
	stacks->b = malloc(sizeof(int) * (argc - 1));
	while (i < argc - 1)
		stacks->b[i++] = -1;
	stacks->sizea = argc - 1;
	stacks->sizeb = argc - 1;
	
	return (stacks);
}

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

void	free_stacks(stacks_t *stacks)
{
	free(stacks->a);
	free(stacks->b);
	free(stacks);
}

int	main(int argc, char **argv)
{
	stacks_t	*stacks;

	if (argc <= 2 || !check_arg(argv))
		return (0);
	stacks = init_stacks(argc, argv);
	print_stacks(stacks);
	free_stacks(stacks);
	//stack_a = parse_arg(argv);
	//sort_stacks(stack_a);
	printf("ok");
	return (0);
}
