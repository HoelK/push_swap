/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:34:44 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 01:34:55 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execute_instruction(t_allstacks *stacks, char *instruction)
{
	if (ft_strcontncmp(instruction, "ra\n", ft_strlen(instruction)))
		ra(stacks);
	else if (ft_strcontncmp(instruction, "rb\n", ft_strlen(instruction)))
		rb(stacks);
	else if (ft_strcontncmp(instruction, "rr\n", ft_strlen(instruction)))
		rr(stacks);
	else if (ft_strcontncmp(instruction, "rra\n", ft_strlen(instruction)))
		rra(stacks);
	else if (ft_strcontncmp(instruction, "rrb\n", ft_strlen(instruction)))
		rrb(stacks);
	else if (ft_strcontncmp(instruction, "rrr\n", ft_strlen(instruction)))
		rrr(stacks);
	else if (ft_strcontncmp(instruction, "sa\n", ft_strlen(instruction)))
		sa(stacks);
	else if (ft_strcontncmp(instruction, "sb\n", ft_strlen(instruction)))
		sb(stacks);
	else if (ft_strcontncmp(instruction, "pa\n", ft_strlen(instruction)))
		pa(stacks);
	else if (ft_strcontncmp(instruction, "pb\n", ft_strlen(instruction)))
		pb(stacks);
	else
		return (free(instruction), kill_p(stacks));
}

void	checker(t_allstacks *stacks)
{
	char	*instruction;

	instruction = get_next_line(STDIN_FILENO);
	while (instruction)
	{
		execute_instruction(stacks, instruction);
		if (instruction)
			free(instruction);
		instruction = NULL;
		instruction = get_next_line(STDIN_FILENO);
	}
	if (!ft_issorted(stacks))
		write(1, "KO", 2);
	else
		write(1, "OK", 2);
}

int	main(int argc, char **argv)
{
	t_allstacks	stacks;

	stacks = parse_args(argc, argv);
	stacks.a.tab = int_to_index(stacks.a.tab, stacks.a.size);
	checker(&stacks);
	free (stacks.a.tab);
	free (stacks.b.tab);
}
