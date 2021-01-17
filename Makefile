.PHONY:	all clean fclean re

NAME =	libftprintf.a

SRCS =	ft_printf.c \
		additional_func/ft_convert_to_hex.c \
		additional_func/ft_ctdigits.c \
		additional_func/ft_max.c \
		additional_func/ft_min.c \
		additional_func/ft_putchar.c \
		additional_func/ft_putnbr.c \
		additional_func/ft_putstr.c \
		additional_func/ft_strrev.c \
		parser/define_conv.c \
		parser/define_flag.c \
		parser/define_prec.c \
		parser/define_width.c \
		parser/parse.c \
		parser/parse_spec.c \
		parser/struct_init.c \
		processor/conv_c.c \
		processor/conv_d_i.c \
		processor/conv_p.c \
		processor/conv_s.c \
		processor/conv_u.c \
		processor/conv_x.c \
		processor/define_spc_char.c \
		processor/print_spc_from_left.c \
		processor/print_spc_from_right.c \
		processor/processor.c \

OBJ =	ft_convert_to_hex.o \
        ft_ctdigits.o \
        ft_max.o \
        ft_min.o \
        ft_putchar.o \
        ft_putnbr.o \
        ft_putstr.o \
        ft_strrev.o \
        define_conv.o \
        define_flag.o \
        define_prec.o \
        define_width.o \
        parse.o \
        parse_spec.o \
        struct_init.o \
        conv_c.o \
        conv_d_i.o \
        conv_p.o \
        conv_s.o \
        conv_u.o \
        conv_x.o \
        define_spc_char.o \
        print_spc_from_left.o \
        print_spc_from_right.o \
        processor.o \

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADERS = -I ./headers

RM		= rm -f

OBJS	= $(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) $(HEADERS) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

.c.o:
	$(CC) $(HEADERS) $(CFLAGS) -c $<

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJ)
	$(RM) $(OBJS)

fclean:		clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re:			fclean all