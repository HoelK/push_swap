/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:25:58 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 16:18:19 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(stacks_t *stacks)
{
	int	i;
	int	size;
	int	*stack;
	int	temp;

	size = stacks->sizea;
	stack = stacks->a;
	temp = stack[size];
	i = 0;
	while (i < size)
	{
		stack[size - i] = stack[size - i - 1];
		i++;
	}
	stack[0] = temp;
	file_add("ra");
}

void	rb(stacks_t *stacks)
{
	int	i;
	int	size;
	int	*stack;
	int	temp;

	size = stacks->sizeb;
	stack = stacks->b;
	temp = stack[size];
	i = 0;
	while (i < size)
	{
		stack[size - i] = stack[size - i - 1];
		i++;
	}
	stack[0] = temp;
	file_add("rb");
}

void	rr(stacks_t *stacks)
{
	ra(stacks);
	rb(stacks);
	file_add("rr");
}
