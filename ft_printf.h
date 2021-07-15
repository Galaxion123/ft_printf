#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "./libft/libft.h"

typedef struct s_cf
{
	int	width;
	int	minus;
	int	zero;
}	t_cf;

int		ft_printf(const char *format, ...);
int		ft_simple_c(unsigned char c);
int		ft_c(unsigned char c, t_cf cf);
int		ft_s(char *str);
int		ft_p(unsigned long long p);
int		ft_di(int di);
int		ft_u(unsigned int u);
int		ft_xX(unsigned int x, int to_lower);
char	*ft_uitoa(unsigned int u);
char	*ft_uitoa_base(unsigned long long u, int base);
char	*ft_str_case(char *str, int to_l);
int		ft_is_conv_spec(char c);
int		ft_is_flag(char c);
t_cf	ft_width_digit(char dig, t_cf cf);
t_cf	ft_minus(t_cf cf);
int		ft_print_width(t_cf cf, int sub);

#endif
