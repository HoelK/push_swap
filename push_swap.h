#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>
#include <stdlib.h>

typedef struct stacks_s
{
	int	*a;
	int	*b;
	int	sizea;
	int	sizeb;
}	stacks_t;

//utils
int	ft_isdigit(int character);
int	str_is_int(const char *str);
int	ft_strncmp(const char *s1, const char *s2, size_t n);

//operation
void	sa(stacks_t *stacks);
void	sb(stacks_t *stacks);
void	ss(stacks_t *stacks);
void	ra(stacks_t stacks);
void	rb(stacks_t stacks);
void	rr(stacks_t stacks);
void	rra(stacks_t stacks);
void	rrb(stacks_t stacks);
void	rrr(stacks_t stacks);
void	pusha(stacks_t stacks);
void	pushb(stacks_t stacks);
void	swap(int *stack, int size);

//struct
stacks_t	*init_stacks(int argc, char **argv);
void	free_stacks(stacks_t *stacks);

//parse
int	check_arg(char **argv);
int	ft_strisdigit(char *str);

//debug - delete before final push
void	print_stacks(stacks_t *stacks); // contains printf forbidden func

#endif
