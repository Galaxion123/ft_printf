#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (ft_strdup(""));
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	buf = (char *) malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (buf == 0)
		return (0);
	while (s1[j] != '\0')
		buf[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		buf[i++] = s2[j++];
	buf[i] = '\0';
	return (buf);
}
