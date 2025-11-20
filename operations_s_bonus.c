/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 02:18:39 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:18:40 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *stack, int size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = stack[size - 1];
	stack[size - 1] = stack[size - 2];
	stack[size - 2] = temp;
}

void	sa(t_allstacks *stacks)
{
	swap(stacks->a.tab, stacks->a.size);
}

void	sb(t_allstacks *stacks)
{
	swap(stacks->b.tab, stacks->b.size);
}

void	ss(t_allstacks *stacks)
{
	sa(stacks);
	sb(stacks);
}
