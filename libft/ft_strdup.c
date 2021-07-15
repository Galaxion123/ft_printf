#include "libft.h"

char	*ft_strdup(const char *s)
{
	char		*dup;
	const char	*str;
	char		*tmp;

	str = s;
	dup = (char *) malloc(ft_strlen(s) + 1);
	if (dup == 0)
		return (NULL);
	tmp = dup;
	while (*str != '\0')
	{
		*tmp = *str;
		str++;
		tmp++;
	}
	*tmp = '\0';
	return (dup);
}
