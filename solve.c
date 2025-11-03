/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:27:59 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/03 14:41:48 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int	is_sorted(stacks_t stacks)
{
	int	i;

	i = 0;
	while (i < stacks->sizea)
	{
		if (stacks->a[i] > stacks->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	solve(stacks_t stacks)
{
	static int	middle = stacks->sizea / 2;
	int	num;
	int	lower;
	int	higher;

	lower = middle - 1;
	higher = middle + 1;
	while (!is_sorted(stacks))
	{
		num = stacks->a[stacks->sizea] != middle
		if (num != lower || num != middle || num != middle)
		{
			pb(stacks);
			continue ;
		}
		if (num > stacks->a[stacks->sizea - 1])
			sa(stacks);
		ra(stacks);
	}
	while (!is_sorted(stacks) && stacks->sizeb != 0)
	{
		index = get_closest(lower, higher);

		way = stacks->sizeb - index < index;
		while (stacks->b[0] != lower && stacks->b[0] != higher)
		{
			if (way)
				rb(stacks);
			else
				rrb(stacks);
		}
		pa(stacks);
		if (stacks->a[0] == higher)
		{
			rra(stacks);
			higher++;
		}
		else
		{
			lower++;
		}
	}
}
