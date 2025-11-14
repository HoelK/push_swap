#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	while (s[i])
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
