#include "ft_printf.h"

t_cf	ft_init_cf(void)
{
	t_cf	cf;

	cf.width = 0;
	cf.minus = 0;
	cf.zero = 0;
	return (cf);
}

static int	ft_flags_analysis(const char *str, int i, t_cf *cf)
{
	int	mem;

	mem = i;
	while (str[i])
	{
		if (ft_is_conv_spec(str[i]))
			return (i);
		if (str[i] == '0' && cf->width == 0 && cf->minus == 0)
			cf->zero = 1;
		if (ft_isdigit(str[i]))
			*cf = ft_width_digit(str[i], *cf);
		if (str[i] == '-')
			*cf = ft_minus(*cf);
		if (!ft_is_flag(str[i]) && !ft_is_conv_spec(str[i])
			&& !ft_isdigit(str[i]))
			return (--mem);
		i++;
	}
	return (i);
}

static int	ft_print_conv(va_list vargs, t_cf cf, char cs)
{
	int	count;

	count = 0;
	if (cs == 'c')
		count += ft_c(va_arg(vargs, int), cf);
	if (cs == 's')
		count += ft_s(va_arg(vargs, char *));
	if (cs == 'p')
		count += ft_p(va_arg(vargs, unsigned long long));
	if (cs == 'd' || cs == 'i')
		count += ft_di(va_arg(vargs, int));
	if (cs == 'u')
		count += ft_u(va_arg(vargs, unsigned int));
	if (cs == 'x')
		count += ft_xX(va_arg(vargs, unsigned long long), 1);
	if (cs == 'X')
		count += ft_xX(va_arg(vargs, unsigned long long), 0);
	if (cs == '%')
		count += ft_simple_c('%');
	return (count);
}

static int	ft_print_str(const char *str, va_list vargs)
{
	int		i;
	int		count;
	t_cf	cf;

	i = 0;
	count = 0;
	while (str[i])
	{
		cf = ft_init_cf();
		if (str[i] == '%' && str[i + 1])
		{
			i = ft_flags_analysis(str, ++i, &cf);
			if (ft_is_conv_spec(str[i]))
				count += ft_print_conv(vargs, cf, str[i]);
			else
				count += ft_simple_c(str[i]);
		}
		else
			count += ft_simple_c(str[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	const char	*str;
	va_list		vargs;
	int			count;

	count = 0;
	str = ft_strdup(format);
	va_start(vargs, format);
	count += ft_print_str(str, vargs);
	va_end(vargs);
	free((char *) str);
	return (count);
}
