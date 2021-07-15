#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	ft_revers_string(char *s)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(s);
	i = 0;
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	char	buffer[12];
	int		have_minus;
	size_t	len;

	have_minus = (n < 0);
	len = 0;
	if (n == 0)
		buffer[len++] = '0';
	else
	{
		while (n != 0)
		{
			buffer[len] = '0' + ft_abs(n % 10);
			n /= 10;
			len++;
		}
		if (have_minus)
			buffer[len++] = '-';
	}
	buffer[len] = '\0';
	ft_revers_string(buffer);
	s = ft_strdup(buffer);
	return (s);
}
