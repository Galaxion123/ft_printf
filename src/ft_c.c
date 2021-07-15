#include "../ft_printf.h"

int	ft_simple_c(unsigned char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_c(unsigned char c, t_cf cf)
{
	int	count;

	count = 0;
	if (cf.minus == 1)
		count += ft_simple_c(c);
	count += ft_print_width(cf, 1);
	if (cf.minus == 0)
		count += ft_simple_c(c);
	return (1);
}
