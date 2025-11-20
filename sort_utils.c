/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:59:14 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:00:20 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	len_to_top(int *tab, int size, int num)
{
	return (size - get_pos(tab, size, num));
}

int	ft_isordered(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int	ft_issorted(t_allstacks *stacks)
{
	int	i;

	i = 0;
	if (stacks->b.size > 0)
		return (0);
	return (ft_isordered(stacks->a.tab, stacks->a.size));
}

int	get_pos(int *stack, int size, int num)
{
	int	i;

	i = 0;
	while (i < size && stack[i] != num)
		i++;
	return (i);
}

int	smallest_value(int *tab, int size)
{
	int	i;
	int	min;

	i = 0;
	min = INT_MAX;
	while (i < size)
	{
		if (tab[i] < min)
			min = tab[i];
		i++;
	}
	return (min);
}
