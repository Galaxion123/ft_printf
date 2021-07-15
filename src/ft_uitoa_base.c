#include "../ft_printf.h"

char	*ft_uitoa_base_2(char *str, unsigned long long mem, int base, int len)
{
	while (mem != 0)
	{
		if ((mem % base) < 10)
			str[len - 1] = (mem % base) + 48;
		else
			str[len - 1] = (mem % base) + 55;
		mem /= base;
		len--;
	}
	return (str);
}

char	*ft_uitoa_base(unsigned long long u, int base)
{
	char				*str;
	unsigned long long	mem;
	int					len;

	mem = u;
	len = 0;
	if (u == 0)
		return (ft_strdup("0"));
	while (u != 0)
	{
		u /= base;
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	return (ft_uitoa_base_2(str, mem, base, len));
}
