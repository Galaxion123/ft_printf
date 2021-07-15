#include "../ft_printf.h"

static int	ft_len(long int lu)
{
	int	len;

	len = 0;
	if (lu < 0)
	{
		len++;
		lu = -lu;
	}
	while (lu >= 1)
	{
		len++;
		lu /= 10;
	}
	return (len);
}

static char	*ft_uitoa_2(char *str, long int lu, int len, int neg)
{
	if (lu < 0)
	{
		neg++;
		lu = -lu;
	}
	str[len] = '\0';
	while (--len)
	{
		str[len] = (lu % 10) + '0';
		lu /= 10;
	}
	if (neg == 1)
		str[0] = '-';
	else
		str[0] = (lu % 10) + '0';
	return (str);
}

char	*ft_uitoa(unsigned int u)
{
	char		*str;
	long int	lu;
	int			len;
	int			neg;

	lu = u;
	neg = 0;
	if (lu == 0)
		return (ft_strdup("0"));
	len = ft_len(lu);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	return (ft_uitoa_2(str, lu, len, neg));
}
