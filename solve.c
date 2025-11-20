/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:46:23 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:18:15 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_allstacks *stacks)
{
	while (stacks->a.tab[stacks->a.size - 1] != 0)
		ra(stacks);
	if (!ft_issorted(stacks))
	{
		pb(stacks);
		sa(stacks);
		pa(stacks);
	}
}

void	five_sort(t_allstacks *stacks)
{
	while (stacks->a.size > 2)
		pb(stacks);
	if (stacks->a.tab[0] < stacks->a.tab[1])
		sa(stacks);
	sort_a(stacks);
	place_b_top(stacks);
}

void	solve(t_allstacks *stacks)
{
	if (stacks->a.size == 3)
		three_sort(stacks);
	else if (stacks->a.size <= 5)
		five_sort(stacks);
	else
	{
		push_in_b(stacks);
		place_b_top(stacks);
		rotate_a(stacks);
	}
}
