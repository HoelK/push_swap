/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42lehavre.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:32:51 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/14 10:57:10 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *stack, int size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack[size];
	stack[size] = stack[size - 1];
	stack[size - 1] = temp;
}

void	sa(t_allstacks *stacks)
{
	swap(stacks->a.tab, stacks->a.size);
	file_add("sa");
}

void	sb(t_allstacks *stacks)
{
	swap(stacks->b.tab, stacks->b.size);
	file_add("sb");
}

void	ss(t_allstacks *stacks)
{
	sa(stacks);
	sb(stacks);
	file_add("ss");
}
