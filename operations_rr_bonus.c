/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 02:18:53 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:18:54 by hkeromne         ###   ########.fr       */
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
}

void	rrb(t_allstacks *stacks)
{
	reverse_rotate(&stacks->b);
}

void	rrr(t_allstacks *stacks)
{
	reverse_rotate(&stacks->a);
	reverse_rotate(&stacks->b);
}
