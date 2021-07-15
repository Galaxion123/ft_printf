#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*buf;
	size_t	i;
	size_t	c;

	if (!s || !f)
		return (ft_strdup(""));
	i = 0;
	c = ft_strlen(s);
	buf = (char *) malloc(c + 1);
	if (buf == 0)
		return (NULL);
	while (i < c)
	{
		buf[i] = (*f)(i, s[i]);
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
