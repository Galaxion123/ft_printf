#include "../ft_printf.h"

int	ft_u(unsigned int u)
{
	char	*u_as_str;
	int		count;

	count = 0;
	u_as_str = ft_uitoa(u);
	count += ft_s(u_as_str);
	free(u_as_str);
	return (count);
}
