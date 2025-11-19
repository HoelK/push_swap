/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:25:58 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/18 23:06:34 by hkeromne         ###   ########.fr       */
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
	while(--i > 0)
		stack->tab[i] = stack->tab[i - 1];
	stack->tab[i] = tmp;
}

void	ra(t_allstacks *stacks)
{
	rotate(&stacks->a);
	write(1, "ra\n", 3);
	file_add("ra");
}

void	rb(t_allstacks *stacks)
{
	rotate(&stacks->b);
	write(1, "rb\n", 3);
	file_add("rb");
}

void	rr(t_allstacks *stacks)
{
	rotate(&stacks->a);
	rotate(&stacks->b);
	write(1, "rr\n", 3);
	file_add("rr");
}
