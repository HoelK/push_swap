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

	i = 0;
	tab = malloc(sizeof(int) * count_args(args));
	while (args[i])
	{
		num = ft_atoi(args[i]);
		if (num < INT_MIN || num > INT_MAX)
			kill_safe(tab, args);
		tab[i] = (int)num;
		i++;
	}
	return (tab);
}

int	*rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = tmp;
		i++;
	}
	return (tab);
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
	stacks.a.tab = rev_int_tab(stacks.a.tab, stacks.a.size);
	if (stacks.a.size < 2)
		kill_safe(stacks.a.tab, args);
	free_double_str(args);
	return (stacks);
}
