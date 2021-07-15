#include "../ft_printf.h"

int	ft_d(int d)
{
	char	*d_as_str;

	d_as_str = ft_itoa(d);
	ft_s(d_as_str);
	return (ft_strlen(d_as_str));
}
