#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*tmp;
	const char	*srct;

	i = 0;
	tmp = dest;
	srct = src;
	if (dest == 0 && src == 0)
		return (0);
	while (i < n)
	{
		*tmp = *srct;
		srct++;
		tmp++;
		i++;
	}
	return (dest);
}
