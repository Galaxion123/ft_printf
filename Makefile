NAME =	libftprintf.a

LIBFT =	./libft/libft.a

LIST =	ft_printf.c \
		src/ft_c.c \
		src/ft_s.c \
		src/ft_p.c \
		src/ft_di.c \
		src/ft_u.c \
		src/ft_uitoa.c \
		src/ft_xX.c \
		src/ft_uitoa_base.c \
		src/ft_csf_checker.c \
		src/ft_cf_distribution.c \
		src/ft_print_width.c \

OBJ = $(patsubst %.c,%.o,$(LIST))

CC = gcc

FLAGS = -Wall -Wextra -Werror

all :	$(NAME)

$(NAME) : $(OBJ)
	$(MAKE) all -C ./libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $?

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean :
	$(MAKE) clean -C ./libft
	@rm -f $(OBJ)

fclean : clean
	$(MAKE) fclean -C ./libft
	@rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re bonus
