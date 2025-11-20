/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkeromne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 01:00:26 by hkeromne          #+#    #+#             */
/*   Updated: 2025/11/20 06:35:49 by hkeromne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isnum(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	if (s[i] == '+' || s[i] == '-')
		i++;
	if (!s[i] || !ft_isdigit(s[i]))
		return (0);
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_abs(int num)
{
	if (num < 0)
		return (num * -1);
	return (num);
}

int	ft_strcontncmp(char *s1, char *s2, size_t size)
{
	size_t	i;

	i = -1;
	while (++i < size)
	{
		if (s1[i] != s2[i])
			return (0);
	}
	return (1);
}

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
