/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42lehavre.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:22:33 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 16:16:16 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_isdigit(int character)
{
        if (!(character >= '0' && character <= '9'))
                return (0);
        return (1);
}

int      str_is_int(const char *str)
{
        size_t  i;
        size_t  size;
	size_t	negative;

        size = 0;
	negative = 0;
	if (str[0] == '-')
	{
		negative = 1;
		str = str + 1;
	}
        while (ft_isdigit(str[size]))
                size++;
        if (size > 10)
                return (0);
        if (size < 10)
                return (1);
        i = 1;
        if (negative == 1)
                while (i < 11 && ft_strncmp(str, "2147483647", i) <= 0)
                        i++;
        else
                while (i < 11 && ft_strncmp(str, "2147483648", i) <= 0)
                        i++;
        return (i - 1 == size);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n || (!s1 && !s2))
		return (0);
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]);
}

void	file_add(char *str)
{
	static fd = open("buffer", O_CREAT | O_WRONLY | O_TRUNC);
	write(fd, str, 3);
	write(fd, "\n", 1);
}
