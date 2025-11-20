/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:04:53 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:11:04 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setup_top(t_allstacks *stacks, t_stacks *stack, int num, char mod)
{
	void	(*rotate)(t_allstacks *);

	if (mod == 'a')
		rotate = &rra;
	else
		rotate = &rrb;
	if (len_to_top(stack->tab, stack->size, num) < (stack->size / 2))
	{
		if (mod == 'a')
			rotate = &ra;
		else
			rotate = &rb;
	}
	while (stack->tab[stack->size - 1] != num)
		rotate(stacks);
}

void	setup_tops(t_allstacks *stacks, int index_a, int index_b)
{
	if (get_pos(stacks->a.tab, stacks->a.size, index_a)
		>= (stacks->a.size / 2)
		&& get_pos(stacks->b.tab, stacks->b.size, index_b)
		>= (stacks->b.size / 2))
	{
		while (stacks->a.tab[stacks->a.size - 1] != index_a
			&& stacks->b.tab[stacks->b.size - 1] != index_b)
			rr(stacks);
	}
	else if (get_pos(stacks->a.tab, stacks->a.size, index_a)
		<= (stacks->a.size / 2)
		&& get_pos(stacks->b.tab, stacks->b.size, index_b)
		<= (stacks->b.size / 2))
	{
		while (stacks->a.tab[stacks->a.size - 1] != index_a
			&& stacks->b.tab[stacks->b.size - 1] != index_b)
			rrr(stacks);
	}
	setup_top(stacks, &stacks->a, index_a, 'a');
	setup_top(stacks, &stacks->b, index_b, 'b');
}

int	get_top_place(int *tab, int size, int num)
{
	int	i;
	int	pos;
	int	closest;

	i = -1;
	closest = tab[0];
	if (closest == num)
		closest = tab[1];
	while (++i < size && closest != (num + 1) && closest != (num - 1))
	{
		if (ft_abs(num - tab[i]) < ft_abs(num - closest) && num != tab[i])
			closest = tab[i];
	}
	pos = get_pos(tab, size, closest);
	if (closest < num)
	{
		pos = pos - 1;
		if (pos == -1)
			pos = size - 1;
		closest = tab[pos];
	}
	return (closest);
}

int	best_b_index(t_allstacks *stacks)
{
	int	i;
	int	tot;
	int	len_a;
	int	len_b;
	int	index;

	i = -1;
	index = 0;
	tot = INT_MAX;
	while (++i < (stacks->b.size))
	{
		len_b = len_to_top(stacks->b.tab, stacks->b.size, stacks->b.tab[i]);
		if (len_b > (stacks->b.size / 2))
			len_b = (stacks->b.size - len_b) + 1;
		len_a = get_top_place(stacks->a.tab, stacks->a.size, stacks->b.tab[i]);
		len_a = get_pos(stacks->a.tab, stacks->a.size, len_a);
		if (len_a > (stacks->a.size / 2))
			len_a = (stacks->a.size - len_a) + 1;
		if (tot > (len_a + len_b))
		{
			tot = len_a + len_b;
			index = stacks->b.tab[i];
		}
	}
	return (index);
}
