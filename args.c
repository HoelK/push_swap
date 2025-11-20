/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:58:51 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:20:15 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
		i++;
	return (i);
}

char	**sort_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (!argv[i][0])
			kill_prog();
		argv[i - 1] = argv[i];
	}
	argv[i - 1] = NULL;
	return (argv);
}

char	**dup_args(int argc, char **args)
{
	int		i;
	char	**new_args;

	i = 0;
	args = sort_args(argc, args);
	new_args = malloc(sizeof(char *) * (argc));
	while (i < argc)
		new_args[i++] = NULL;
	i = -1;
	while (args[++i])
		new_args[i] = ft_strdup(args[i]);
	return (new_args);
}

char	**get_args(int argc, char **argv)
{
	char	**args;

	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = dup_args(argc, argv);
	return (args);
}
