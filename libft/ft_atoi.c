#include "libft.h"

static int	ft_charint(char *str, int i, int n, int count)
{
	int		j;
	int		num;
	int		c;

	j = i - n;
	num = 0;
	c = 0;
	while (j < i)
	{
		num *= 10;
		num += str[j] - '0';
		j++;
		c++;
	}
	if (c > 11 && (!((count % 2) > 0)))
		return (-1);
	if (c > 11 && (count % 2) > 0)
		return (0);
	if ((count % 2) > 0)
		num = -num;
	return (num);
}

int	ft_atoi(char *str)
{
	int		i;
	int		n;
	int		count;

	i = 0;
	n = 0;
	count = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n++;
		i++;
	}
	return (ft_charint(str, i, n, count));
}
