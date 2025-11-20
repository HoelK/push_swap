/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:05:06 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 02:12:29 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "get_next_line.h"

typedef struct s_stacks
{
	int	size;
	int	*tab;
}	t_stacks;

typedef struct s_allstacks
{
	t_stacks	a;
	t_stacks	b;
}	t_allstacks;

//Solve
void		three_sort(t_allstacks *stacks);
void		five_sort(t_allstacks *stacks);
void		solve(t_allstacks *stacks);

//Sort Utils
void		rotate_a(t_allstacks *stacks);
int			ft_isordered(int *tab, int size);
int			ft_issorted(t_allstacks *stacks);
int			smallest_value(int *tab, int size);
int			get_pos(int *stack, int size, int num);
int			len_to_top(int *tab, int size, int num);
void		setup_top(t_allstacks *stacks, t_stacks *stack, int num, char mod);
void		setup_tops(t_allstacks *stacks, int index_a, int index_b);
int			get_top_place(int *tab, int size, int num);
int			best_b_index(t_allstacks *stacks);
void		push_in_b(t_allstacks *stacks);
void		sort_a(t_allstacks *stacks);
void		place_b_top(t_allstacks *stacks);

//Operations
void		rra(t_allstacks *stacks);
void		rrb(t_allstacks *stacks);
void		rrr(t_allstacks *stacks);
void		ra(t_allstacks *stacks);
void		rb(t_allstacks *stacks);
void		rr(t_allstacks *stacks);
void		pa(t_allstacks *stacks);
void		pb(t_allstacks *stacks);
void		sa(t_allstacks *stacks);
void		sb(t_allstacks *stacks);
void		ss(t_allstacks *stacks);

//Parse
int			*args_to_int_tab(char **args);
int			check_tab(int *tab, int size);
int			check_dup(t_allstacks *stacks);
t_allstacks	parse_args(int argc, char **argv);

//Parse args
int			count_args(char **args);
char		**sort_args(int argc, char **argv);
char		**dup_args(int argc, char **args);
char		**get_args(int argc, char **argv);

//Int to index
int			*int_to_index(int *stack, int size);

//Safety
void		kill_prog(void);
void		free_double_str(char **str);
void		kill_p(t_allstacks *stacks);
void		kill_safe(int *tab, char **to_free);

//Sort Utils
int			ft_issorted(t_allstacks *stacks);
int			get_pos(int *stack, int size, int num);

//Utils
long		ft_atoi(char *s);
int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);
char		**ft_split(const char *str, char c);
int			ft_strcontncmp(char *s1, char *s2, size_t size);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_abs(int num);
int			ft_strcontncmp(char *s1, char *s2, size_t size);

#endif
