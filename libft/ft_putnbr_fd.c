#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int				pow_ten;
	long long int	nbr;
	char			c;

	pow_ten = 1000000000;
	nbr = n;
	if (nbr == 0)
		write(fd, "0", 1);
	if (nbr < 0)
	{
		nbr = -nbr;
		write(fd, "-", 1);
	}
	while (nbr < pow_ten)
	{
		pow_ten /= 10;
	}
	while (pow_ten > 0)
	{
		c = ((nbr / pow_ten) + '0');
		write(fd, &c, 1);
		nbr %= pow_ten;
		pow_ten /= 10;
	}
}
