/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 02:18:29 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:18:30 by hkeromne         ###   ########.fr       */
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
}

void	pb(t_allstacks *stacks)
{
	if (stacks->a.size == 0)
		return ;
	stacks->b.size += 1;
	stacks->b.tab[stacks->b.size - 1] = stacks->a.tab[stacks->a.size - 1];
	stacks->a.tab[stacks->a.size - 1] = -1;
	stacks->a.size -= 1;
}
