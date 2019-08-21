#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <fcntl.h>

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
char    *ft_strcat(char *restrict s1, const char *restrict s2);
void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
char    *ft_strdup(const char *s1);
char*    ft_cat(int fd);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strequ(const char *s1, const char *s2);

# ifndef CHAR_MAX
# define CHAR_MAX 255
#endif

#endif
