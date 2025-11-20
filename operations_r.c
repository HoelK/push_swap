/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:51:41 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:00:50 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stacks *stack)
{
	int	i;
	int	tmp;

	if (stack->size < 2)
		return ;
	i = stack->size;
	tmp = stack->tab[i - 1];
	while (--i > 0)
		stack->tab[i] = stack->tab[i - 1];
	stack->tab[i] = tmp;
}

void	ra(t_allstacks *stacks)
{
	rotate(&stacks->a);
	write(1, "ra\n", 3);
}

void	rb(t_allstacks *stacks)
{
	rotate(&stacks->b);
	write(1, "rb\n", 3);
}

void	rr(t_allstacks *stacks)
{
	rotate(&stacks->a);
	rotate(&stacks->b);
	write(1, "rr\n", 3);
}
