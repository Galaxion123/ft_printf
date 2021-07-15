#include "../ft_printf.h"

char	*ft_str_case(char *str, int to_lower)
{
	int	i;

	i = 0;
	if (to_lower == 1)
	{
		while (str[i])
		{
			str[i] = ft_tolower(str[i]);
			i++;
		}
	}
	return (str);
}

int	ft_xX(unsigned int x, int to_l)
{
	char	*xX_as_str;
	int		base;
	int		count;

	base = 16;
	count = 0;
	x = (unsigned int)(4294967295 + 1 + x);
	xX_as_str = ft_str_case(ft_uitoa_base((unsigned long long) x, base), to_l);
	count += ft_s(xX_as_str);
	free(xX_as_str);
	return (count);
}
