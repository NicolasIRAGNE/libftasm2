#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(char *s);
int	ft_isalpha(int c);
#ifndef CHAR_MAX
#define CHAR_MAX 255
#endif

#endif
