#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*tmp;

	total = nmemb * size;
	tmp = malloc(total);
	if (tmp)
		ft_bzero(tmp, total);
	return (tmp);
}
