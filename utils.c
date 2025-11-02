/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dedavid <dedavid@student.42lehavre.fr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:22:33 by dedavid           #+#    #+#             */
/*   Updated: 2025/11/02 13:40:52 by dedavid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_isdigit(int character)
{
        if (!(character >= '0' && character <= '9'))
                return (0);
        return (1);
}

int      str_is_int(const char *str, size_t negative)
{
        size_t  i;
        size_t  size;

        size = 0;
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
