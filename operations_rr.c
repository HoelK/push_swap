/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:51:24 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:55:23 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stacks *stack)
{
	int	i;
	int	tmp;

	if (stack->size < 2)
		return ;
	i = -1;
	tmp = stack->tab[0];
	while (++i < (stack->size - 1))
		stack->tab[i] = stack->tab[i + 1];
	stack->tab[i] = tmp;
}

void	rra(t_allstacks *stacks)
{
	reverse_rotate(&stacks->a);
	write(1, "rra\n", 4);
}

void	rrb(t_allstacks *stacks)
{
	reverse_rotate(&stacks->b);
	write(1, "rrb\n", 4);
}

void	rrr(t_allstacks *stacks)
{
	reverse_rotate(&stacks->a);
	reverse_rotate(&stacks->b);
	write(1, "rrr\n", 4);
}
