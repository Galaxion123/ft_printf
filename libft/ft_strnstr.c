#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	littlelen;

	if (*little == '\0')
		return ((char *)big);
	littlelen = ft_strlen(little);
	while (*big != '\0' && len-- >= littlelen)
	{
		if (*big == *little && ft_memcmp(big, little, littlelen) == 0)
			return ((char *)big);
		else
			big++;
	}
	return (NULL);
}
