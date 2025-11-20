/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:07:19 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:11:49 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_in_b(t_allstacks *stacks)
{
	int	i;
	int	max_size;

	i = 0;
	max_size = stacks->a.size;
	while (stacks->a.size > 3)
	{
		pb(stacks);
		if (stacks->b.tab[stacks->b.size - 1] > (max_size / 2))
			rb(stacks);
	}
	sort_a(stacks);
}

void	sort_a(t_allstacks *stacks)
{
	while (stacks->a.tab[stacks->a.size - 1]
		!= smallest_value(stacks->a.tab, stacks->a.size)
		&& !ft_isordered(stacks->a.tab, stacks->a.size))
		ra(stacks);
	if (!ft_isordered(stacks->a.tab, stacks->a.size))
	{
		pb(stacks);
		sa(stacks);
		pa(stacks);
	}
}

void	place_b_top(t_allstacks *stacks)
{
	int	index_a;
	int	index_b;

	while (stacks->b.size)
	{
		index_b = best_b_index(stacks);
		index_a = get_top_place(stacks->a.tab, stacks->a.size, index_b);
		setup_tops(stacks, index_a, index_b);
		pa(stacks);
	}
}

void	rotate_a(t_allstacks *stacks)
{
	int	zero_pos;

	zero_pos = get_pos(stacks->a.tab, stacks->a.size, 0);
	if (zero_pos < (stacks->a.size / 2))
	{
		while (stacks->a.tab[stacks->a.size - 1] != 0)
			rra(stacks);
	}
	else
	{
		while (stacks->a.tab[stacks->a.size - 1] != 0)
			ra(stacks);
	}
}
