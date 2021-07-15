#include "libft.h"

static int	ft_is_char_in(char c, char const *str)
{
	unsigned int	i;

	if (str)
	{
		i = -1;
		while (str[++i])
			if (str[i] == c)
				return (1);
	}
	return (0);
}

static char	*ft_strtrim_begin(char const *s1, char const *set)
{
	unsigned int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = -1;
	while (s1[++i] && (ft_is_char_in(s1[i], set) == 1))
		;
	return ((char *)s1 + i);
}

static char	*ft_strtrim_end(char const *s1, char const *set)
{
	int	i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = ft_strlen(s1);
	while (i && (ft_is_char_in(s1[--i], set) == 1))
		;
	return ((char *)s1 + i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*stop;

	if (!s1 || !s1[0])
		return (ft_strdup(""));
	else if (!set)
		return (ft_strdup(s1));
	else
	{
		start = ft_strtrim_begin(s1, set);
		stop = ft_strtrim_end(s1, set);
		return (ft_substr(s1, start - s1, stop - start + 1));
	}
}
