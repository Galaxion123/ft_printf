#include "../ft_printf.h"

int	ft_p(unsigned long long p)
{
	char	*x_as_str;
	int		count;

	count = 0;
	if (p == 0)
		count += ft_s("0x0");
	else
	{
		x_as_str = ft_str_case(ft_uitoa_base(p, 16), 1);
		count += ft_s("0x");
		count += ft_s(x_as_str);
		free(x_as_str);
	}
	return (count);
}
