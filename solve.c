/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:46:23 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 06:48:08 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_allstacks *stacks)
{
	int	a;
	int	b;
	int	c;

	a = stacks->a.tab[2];
	b = stacks->a.tab[1];
	c = stacks->a.tab[0];
	if (a > b && a < c && b < c)
		sa(stacks);
	else if (a > b && a > c && b < c)
		ra(stacks);
	else if (a < b && a > c && b > c)
		rra(stacks);
	else if (a > b && a > c && b > c)
		(sa(stacks), rra(stacks));
	else if (a < b && a < c && b > c)
		(sa(stacks), ra(stacks));
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
	if (stacks->a.size == 2)
		sa(stacks);
	else if (stacks->a.size == 3)
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
