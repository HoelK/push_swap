/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:37:36 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/14 10:57:19 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_allstacks *stacks)
{
	int	i;
	int	size;
	int	temp;
	int	*stack;

	size = stacks->a.size;
	stack = stacks->a.tab;
	temp = stack[0];
	i = 0;
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size] = temp;
	file_add("rra");
}

void	rrb(t_allstacks *stacks)
{
	int	i;
	int	size;
	int	temp;
	int	*stack;

	size = stacks->b.size;
	stack = stacks->b.tab;
	temp = stack[0];
	i = 0;
	while (i < size)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[size] = temp;
	file_add("rrb");
}

void	rrr(t_allstacks *stacks)
{
	rra(stacks);
	rrb(stacks);
	file_add("rrb");
}
