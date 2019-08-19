#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(char *s);
int     ft_isalpha(int c);
int     ft_isalnum(int c);
int     ft_isprint(int c);
int     ft_isdigit(int c);
int     ft_isascii(int c);
int     ft_isupper(int c);
int     ft_islower(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_puts(const char *s);
int		debug_get_table(int c);

# ifndef CHAR_MAX
# define CHAR_MAX 255
#endif

#endif
