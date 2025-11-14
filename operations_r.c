/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:25:58 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/14 10:57:14 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_allstacks *stacks)
{
	int	i;
	int	size;
	int	*stack;
	int	temp;

	size = stacks->a.size - 1;
	stack = stacks->a.tab;
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

void	rb(t_allstacks *stacks)
{
	int	i;
	int	size;
	int	temp;
	int	*stack;

	size = stacks->b.size;
	stack = stacks->b.tab;
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

void	rr(t_allstacks *stacks)
{
	ra(stacks);
	rb(stacks);
	file_add("rr");
}
