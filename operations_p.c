/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:10:59 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/18 23:07:21 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_allstacks *stacks)
{
	if (stacks->b.size == 0)
		return ;
	stacks->a.size += 1;
	stacks->a.tab[stacks->a.size - 1] = stacks->b.tab[stacks->b.size - 1];
	stacks->b.tab[stacks->b.size] = -1;
	stacks->b.size -= 1;
	write(1, "pa\n", 3);
	file_add("pa");
}

void	pb(t_allstacks *stacks)
{
	if (stacks->a.size == 0)
		return ;
	stacks->b.size += 1;
	stacks->b.tab[stacks->b.size - 1] = stacks->a.tab[stacks->a.size - 1];
	stacks->a.tab[stacks->a.size] = -1;
	stacks->a.size -= 1;
	write(1, "pb\n", 3);
	file_add("pb");
}
