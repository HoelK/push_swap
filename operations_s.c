/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42lehavre.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:32:51 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 16:28:51 by hkeromne         ###   ########.fr       */
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

void	sa(stacks_t *stacks)
{
	swap(stacks->a, stacks->sizea);
	file_add("sa");
}

void	sb(stacks_t *stacks)
{
	swap(stacks->b, stacks->sizeb);
	file_add("sb");
}

void	ss(stacks_t *stacks)
{
	sa(stacks);
	sb(stacks);
	file_add("ss");
}
