/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 16:27:59 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 16:37:36 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

void	solve(stacks_t stacks)
{
	static int	middle = stacks->sizea / 2;
	int	num;
	int	lower;
	int	higher;

	lower = middle - 1;
	higher = middle + 1;
	while (1)
	{
		num = stacks->a[stacks->sizea] != middle 
		if (num != lower || num != middle || num != middle)
			pb(stacks);
		else
		{	
			if (num > stacks->a[stacks->sizea - 1])
				sa(stacks);
		}
	}
}
