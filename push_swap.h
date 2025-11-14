
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_stacks
{
	int	size;
	int	*tab;
}	t_stacks;

typedef struct s_allstacks
{
	t_stacks a;
	t_stacks b;
}	t_allstacks;

int		ft_isdigit(int c);
char	**ft_split(const char *str, char c);
void	free_double_str(char **str);
void	print_int_tab(int *tab, int size);
void	kill_safe(int *tab, char **to_free);
void	print_args(char **args);
char	**sort_args(int argc, char **argv);
char	**dup_args(int argc, char **args);
char	**get_args(int argc, char **argv);
int		count_args(char **args);
long	ft_atoi(char *s);
int		check_tab(int *tab, int size);
int		*args_to_int_tab(char **args);
t_allstacks	parse_args(int argc, char **argv);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
//void	print_stack(t_stack stack);

//operation
void    sa(t_allstacks *stacks);
void    sb(t_allstacks *stacks);
void    ss(t_allstacks *stacks);
void    ra(t_allstacks *stacks);
void    rb(t_allstacks *stacks);
void    rr(t_allstacks *stacks);
void    rra(t_allstacks *stacks);
void    rrb(t_allstacks *stacks);
void    rrr(t_allstacks *stacks);
void    pa(t_allstacks *stacks);
void    pb(t_allstacks *stacks);
void    pusha(t_allstacks *stacks);
void    pushb(t_allstacks *stacks);
void    swap(int *stack, int size);

//int to index
int			*int_to_index(int *stack, int size);
void		file_add(char *str);

//debug
void	print_stack(t_allstacks stack);

void	solve(t_allstacks *stacks);

#endif
