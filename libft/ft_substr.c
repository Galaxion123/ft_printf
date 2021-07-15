#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buf;
	size_t	i;
	size_t	j;

	i = 0;
	j = start;
	if (!s || len <= 0 || start >= ft_strlen(s))
		return (ft_strdup(""));
	buf = (char *) malloc(len + 1);
	if (buf == 0)
		return (0);
	while (s[j] != '\0' && i < len)
	{
		buf[i] = s[j];
		i++;
		j++;
	}
	buf[i] = '\0';
	return (buf);
}
