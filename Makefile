# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edinguim <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/15 17:50:31 by edinguim          #+#    #+#              #
#    Updated: 2018/02/07 16:23:03 by edinguim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_joinfree.c\
	  ft_ltoa.c\
	  ft_printf.c\
	  ft_printf_add_char.c\
	  ft_printf_add_conv.c\
	  ft_printf_buffer.c\
	  ft_printf_c.c\
	  ft_printf_conv.c\
	  ft_printf_di.c\
	  ft_printf_flags.c\
	  ft_printf_parse.c\
	  ft_printf_oux.c\
	  ft_printf_p.c\
	  ft_printf_majd.c\
	  ft_printf_majo.c\
	  ft_printf_maju.c\
	  ft_printf_majc.c\
	  ft_printf_majs.c\
	  ft_printf_s.c\
	  ft_utoa_base.c\
	  ft_strjoin.c\
	  ft_strdel.c\
	  ft_intmaxsize.c\
	  ft_strnew.c\
	  ft_putchar.c\
	  ft_strdup.c\
	  ft_strlen.c\
	  ft_isdigit.c\
	  ft_atoi.c\
	  ft_strchr.c\
	  ft_strcat.c\
	  ft_strcpy.c\
	  ft_isspace.c\
	  ft_memset.c\
	  ft_printf_modulo.c\
	  ft_putendl.c\
	  ft_putstr.c\
	  ft_printf_unicode.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
