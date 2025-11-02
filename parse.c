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

	i = 0;
	while (argv[i] != NULL)
	{
		if (!ft_strisdigit(argv[i]) || !str_is_int(argv[i++]))
			exit(0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	*start;

	if (argc <= 2 || !check_arg(argv))
		return (0);
	//stack_a = parse_arg(argv);
	//sort_stacks(stack_a);
	printf("ok");
	return (0);
}
