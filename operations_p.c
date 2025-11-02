/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:10:59 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 14:23:19 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	pusha(stacks_t stacks)
{
	if (stacks->sizeb == 0)
		return ;
	stacks->sizea += 1;
	stacks->a[stacks->sizea] = stacks->b[stacks->sizeb];
	stacks->b[stacks->sizeb] = -1;
	stacks->bsize -= 1;
}

void	pushb(stacks_t stacks)
{
	if (stacks->sizea == 0)
		return ;
	stacks->sizeb += 1;
	stacks->b[stacks->sizeb] = stacks->a[stacks->sizea];
	stacks->a[stacks->sizea] = -1;
	stacks->asize -= 1;
}
