#include "push_swap.h"

void	free_double_str(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

void	kill_safe(int *tab, char **to_free)
{
	int	i;

	i = 0;
	while (to_free[i])
		free(to_free[i++]);
	free(to_free);
	free(tab);
	write(1, "Error", 5);
	exit(0);
}
