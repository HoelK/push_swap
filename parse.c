#include "push_swap.h"

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
