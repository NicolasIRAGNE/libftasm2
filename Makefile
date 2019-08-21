# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niragne <niragne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 18:20:16 by ldedier           #+#    #+#              #
#    Updated: 2019/08/21 11:49:53 by niragne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
CC = ~/.brew/bin/nasm

SRCDIR   = srcs
OBJDIR   = objs
INCLUDESDIR = includes

OK_COLOR = \x1b[32;01m
EOC = \033[0m

SRCS_NO_PREFIX =	ascii_table.s ft_isalpha.s ft_bzero.s ft_strlen.s ft_isalnum.s \
					ft_isdigit.s ft_isprint.s ft_isascii.s ft_islower.s ft_isupper.s \
					ft_toupper.s ft_tolower.s ft_puts.s debug_get_table.s ft_strcat.s \
					ft_memset.s ft_memcpy.s ft_strdup.s ft_cat.s ft_striter.s ft_striteri.s\
					ft_strequ.s

SOURCES = $(addprefix $(SRCDIR)/, $(SRCS_NO_PREFIX))
OBJECTS = $(addprefix $(OBJDIR)/, $(SRCS_NO_PREFIX:%.s=%.o))

INC = -I $(INCLUDESDIR)
INCLUDES_NO_PREFIX = libftasm.h
INCLUDES = $(addprefix $(INCLUDESDIR)/, $(INCLUDES_NO_PREFIX))

CFLAGS = -f macho64

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.s $(OBJDIR)
	$(CC) -o $@ $< $(CFLAGS)

$(NAME): $(OBJECTS)
	ar rc $@ $^
	ranlib $(NAME)
	echo "$(OK_COLOR)$(NAME) linked with success !$(EOC)"

clean:
	rm -f $(OBJECTS)
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
