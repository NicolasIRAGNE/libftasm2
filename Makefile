# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: niragne <niragne@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/06 18:20:16 by ldedier           #+#    #+#              #
#    Updated: 2019/08/17 17:49:18 by niragne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libfts.a
CC = nasm

SRCDIR   = srcs
OBJDIR   = objs
BINDIR   = .
INCLUDESDIR = includes

OK_COLOR = \x1b[32;01m
EOC = \033[0m

SRCS_NO_PREFIX = ascii_table.s ft_isalpha.s ft_bzero.s ft_strlen.s

SOURCES = $(addprefix $(SRCDIR)/, $(SRCS_NO_PREFIX))
OBJECTS = $(addprefix $(OBJDIR)/, $(SRCS_NO_PREFIX:%.s=%.o))

INC = -I $(INCLUDESDIR)
INCLUDES_NO_PREFIX = libftasm.h
INCLUDES = $(addprefix $(INCLUDESDIR)/, $(INCLUDES_NO_PREFIX))

CFLAGS = -f elf64

all: $(BINDIR)/$(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.s
	$(CC) -o $@ $< $(CFLAGS)

$(BINDIR)/$(NAME): $(OBJECTS)
	@ar rc $@ $^
	@ranlib $(NAME)
	@echo "$(OK_COLOR)$(NAME) linked with success !$(EOC)"

clean:
	@rm -f $(OBJECTS)
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(BINDIR)/$(NAME)

re: fclean all

.PHONY: all clean fclean re
