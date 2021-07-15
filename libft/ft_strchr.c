#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	while (*tmp != '\0' && *tmp != c)
	{
		tmp++;
	}
	if (*tmp == c)
		return ((char *)tmp);
	else
		return (0);
}
