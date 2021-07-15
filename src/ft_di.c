#include "../ft_printf.h"

int	ft_di(int di)
{
	char	*di_as_str;
	int		count;

	count = 0;
	di_as_str = ft_itoa(di);
	count += ft_s(di_as_str);
	free(di_as_str);
	return (count);
}
