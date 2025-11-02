#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stddef.h>

typedef struct stacks_s
{
	int	*a;
	int	*b;
	int	sizea;
	int	sizeb;
}	stacks_t;

//utils
int	ft_isdigit(int character);
int	str_is_int(const char *str, size_t negative);

//operation
void	swap(int *stack, int size);
void	sa(stacks_t *stacks);
void	sb(stacks_t *stacks);
void	ss(stacks_t *stacks);

#endif
