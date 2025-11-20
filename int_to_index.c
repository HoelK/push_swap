/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_to_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:07:28 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:07:29 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_min(int *stack, int *new_stack, int size)
{
	int	i;
	int	min;

	i = 0;
	min = 0;
	while (new_stack[i] != -1)
		i++;
	min = i;
	i = 0;
	while (i < size)
	{
		if (stack[i] < stack[min] && new_stack[i] == -1)
			min = i;
		i++;
	}
	return (min);
}

int	*int_to_index(int *stack, int size)
{
	int	i;
	int	j;
	int	min;
	int	*new_stack;

	i = 0;
	j = 0;
	min = 0;
	new_stack = malloc(sizeof(int) * size);
	if (new_stack == NULL)
		return (free(stack), NULL);
	while (i < size)
		new_stack[i++] = -1;
	i = -1;
	while (++i < size)
		new_stack[get_min(stack, new_stack, size)] = i;
	free(stack);
	return (new_stack);
}
