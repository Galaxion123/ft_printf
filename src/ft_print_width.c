#include "../ft_printf.h"

int	ft_print_width(t_cf cf, int sub)
{
	int	count;
	int	width;

	count = 0;
	width = cf.width;
	while (width - sub > 0)
	{
		if (cf.zero == 1)
			count += ft_simple_c('0');
		else
			count += ft_simple_c(' ');
		width--;
	}
	return (count);
}
