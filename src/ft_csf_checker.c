#include "../ft_printf.h"

int	ft_is_conv_spec(char c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int	ft_is_flag(char c)
{
	return (c == '-' || c == '0' || c == '.' || c == '*');
}
