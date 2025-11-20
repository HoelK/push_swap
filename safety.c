/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safety.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:13:24 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:22:51 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	kill_prog(void)
{
	write(1, "Error", 5);
	exit(0);
}

void	kill_p(t_allstacks *stacks)
{
	write(1, "Error", 5);
	free(stacks->a.tab);
	free(stacks->b.tab);
	exit (0);
}

void	kill_safe(int *tab, char **to_free)
{
	int	i;

	i = 0;
	while (to_free[i])
		free(to_free[i++]);
	free(to_free);
	free(tab);
	write(1, "Error", 5);
	exit(0);
}

void	free_double_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}
