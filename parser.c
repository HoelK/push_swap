#include "push_swap.h"

int	check_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	*args_to_int_tab(char **args)
{
	int		i;
	long	num;
	int		*tab;
	int		size;

	i = 0;
	size = count_args(args) - 1;
	tab = malloc(sizeof(int) * (size + 1));
	while (args[i])
	{
		num = ft_atoi(args[i]);
		if (num < INT_MIN || num > INT_MAX)
			kill_safe(tab, args);
		tab[size - i] = (int)num;
		i++;
	}
	return (tab);
}

int	check_dup(t_allstacks *stacks)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < stacks->a.size)
	{
		while (j < stacks->a.size)
		{
			if (stacks->a.tab[i] == stacks->a.tab[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

t_allstacks	parse_args(int argc, char **argv)
{
	char		**args;
	t_allstacks	stacks;

	args = get_args(argc, argv);
	stacks.a.size = (count_args(args));
	stacks.a.tab = args_to_int_tab(args);
	stacks.b.tab = malloc(sizeof(int) * stacks.a.size);
	stacks.b.size = 0;
	if (stacks.a.size < 2 || ft_issorted(&stacks)
		|| check_dup(&stacks))
		kill_safe(stacks.a.tab, args);
	free_double_str(args);
	return (stacks);
}
