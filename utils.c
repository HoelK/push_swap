#include "push_swap.h"

long	ft_atoi(char *s)
{
	int		sign;
	long	result;

	sign = 0;
	result = 0;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign = 1;
		s++;
	}
	while (*s && ft_isdigit(*s) && (result >= INT_MIN && result <= INT_MAX))
	{
		result += *s - '0';
		s++;
		if (ft_isdigit(*s))
			result *= 10;
	}
	if (*s && !ft_isdigit(*s))
		return (LONG_MAX);
	if (sign)
		return (-result);
	return (result);
}

void    file_add(char *str)
{
        int fd = open("buffer", O_CREAT | O_WRONLY | O_TRUNC);
        write(fd, str, 3);
        write(fd, "\n", 1);
}
