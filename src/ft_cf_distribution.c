#include "../ft_printf.h"

t_cf	ft_width_digit(char dig, t_cf cf)
{
	cf.width = (cf.width * 10) + (dig - '0');
	return (cf);
}

t_cf	ft_minus(t_cf cf)
{
	cf.minus = 1;
	cf.zero = 0;
	return (cf);
}
