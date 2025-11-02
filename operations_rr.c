/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_rr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:37:36 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 16:19:01 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(stacks_t *stacks)
{
	int	i;
	int	size;
	int	*stack;
	int	temp;

	size = stacks->sizea;
	stack = stacks->a;
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

void	rrb(stacks_t *stacks)
{
	int	i;
	int	size;
	int	*stack;
	int	temp;

	size = stacks->sizeb;
	stack = stacks->b;
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

void	rrr(stacks_t *stacks)
{
	rra(stacks);
	rrb(stacks);
	file_add("rrb");
}
