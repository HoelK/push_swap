/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:25:58 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 14:35:08 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ra(stacks_t stacks)
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
}

void	rb(stacks_t stacks)
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
}

void	rr(stacks_t stacks)
{
	ra(stacks);
	rb(stacks);
}
