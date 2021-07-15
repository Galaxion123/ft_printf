#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	char const	*srct;

	tmp = dest;
	srct = src;
	if (tmp <= srct)
	{
		return (ft_memcpy(tmp, srct, n));
	}
	else
	{
		tmp += n;
		srct += n;
		while (n--)
			*--tmp = *--srct;
	}
	return (dest);
}
