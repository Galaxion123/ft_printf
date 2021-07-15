#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char		*tmp;
	const char	*srct;
	size_t		i;
	size_t		l;

	tmp = dst;
	srct = src;
	i = size;
	while (i-- != 0 && *tmp != '\0')
		tmp++;
	l = tmp - dst;
	i = size - l;
	if (i == 0)
		return (l + ft_strlen(srct));
	while (*srct != '\0')
	{
		if (i != 1)
		{
			*tmp++ = *srct;
			i--;
		}
		srct++;
	}
	*tmp = '\0';
	return (l + (srct - src));
}
