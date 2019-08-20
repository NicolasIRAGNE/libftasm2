/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niragne <niragne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:18:59 by niragne           #+#    #+#             */
/*   Updated: 2019/08/20 18:47:46 by niragne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#include <errno.h>

# define RED            "\x1B[31m"
# define GREEN          "\x1B[32m"
# define EOC            "\033[0m"

#define BZERO_TEST_LEN (USHRT_MAX * 10)
#define PUTS_TEST_1 "Test puts passed. Maybe."

int    test_mem(char *a, char *b, size_t n)
{
    int i = 0;
    
    while (i < n)
    {
   	if (a[i] != b[i])
		return i;
        i++;
    }
    return (0);
}

int    test_bzero()
{
	char a[BZERO_TEST_LEN];
	char b[BZERO_TEST_LEN];
    int i = 0;
	ft_bzero(a, BZERO_TEST_LEN);
	bzero(b, BZERO_TEST_LEN);
    while (i < BZERO_TEST_LEN)
    {
   		if (a[i] != b[i])
		{
			printf(RED"BZERO FAILED AT %d\n"EOC, i);
			return i;
		}
        i++;
    }
	printf(GREEN"Test bzero passed with %d bytes.\n"EOC, BZERO_TEST_LEN);
    return (0);
}

int	test_isalpha()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if ((isalpha(i) && !ft_isalpha(i)) || (!isalpha(i) && ft_isalpha(i)))
		{
			dprintf(2,RED"ISALPHA FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest isalpha passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_isdigit()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if ((isdigit(i) && !ft_isdigit(i)) || (!isdigit(i) && ft_isdigit(i)))
		{
			dprintf(2,RED"ISDIGIT FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest isdigit passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_isalnum()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX + 100)
	{
		if ((isalnum(i) && !ft_isalnum(i)) || (!isalnum(i) && ft_isalnum(i)))
		{
			dprintf(2,RED "ISALNUM FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest isalnum passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_isascii()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if ((isascii(i) && !ft_isascii(i)) || (!isascii(i) && ft_isascii(i)))
		{
			dprintf(2,RED"ISASCII FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest isascii passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_isprint()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if ((isprint(i) && !ft_isprint(i)) || (!isprint(i) && ft_isprint(i)))
		{
			dprintf(2,RED"ISPRINT FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest isprint passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_isupper()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if ((isupper(i) && !ft_isupper(i)) || (!isupper(i) && ft_isupper(i)))
		{
			dprintf(2,RED"isupper FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest isupper passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_islower()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if ((islower(i) && !ft_islower(i)) || (!islower(i) && ft_islower(i)))
		{
			dprintf(2,RED"islower FAILED AT %d\n"EOC, i);
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest islower passed with %d errors.\n"EOC, color, errors);
	return 0;
}

int	test_types()
{
	test_isalpha();
	test_isdigit();
	test_isalnum();
	test_isascii();
	test_isprint();
	test_isupper();
	test_islower();
	return (0);
}

int	test_toupper()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if (toupper(i) != ft_toupper(i))
		{
			dprintf(2,RED"TOUPPER FAILED AT %d (returned EOC%x, expected %x)\n", i, ft_toupper(i), toupper(i));
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest toupper passed with %d errors.\n"EOC, color, errors);
	return (errors);
}


int	test_tolower()
{
	int i = SHRT_MIN;
	int errors = 0;

	while (i < SHRT_MAX)
	{
		if (tolower(i) != ft_tolower(i))
		{
			dprintf(2,RED"tolower FAILED AT %d (returned EOC%x, expected %x)\n", i, ft_tolower(i), tolower(i));
			errors++;
		}
		i++;
	}
	char* color;
	if (errors)
		color = RED;
	else
		color = GREEN;
	printf("%sTest tolower passed with %d errors.\n"EOC, color, errors);
	return (errors);
}

int	test_puts()
{
	int tmp;
	int tmp2;

	tmp = puts(PUTS_TEST_1);
	tmp2 = ft_puts(PUTS_TEST_1);
	return (0);
}

int	test_strcat()
{
	char s1[512], s2[255];
	char s3[512], s4[255];

	memset(s1, 'a', sizeof(s1));
	s1[254] = 0;
	memset(s2, 'b', sizeof(s2));
	s2[254] = 0;
	strcat(s1, s2);

	memset(s3, 'a', sizeof(s3));
	s3[254] = 0;
	memset(s4, 'b', sizeof(s4));
	s4[254] = 0;

	ft_strcat(s3, s4);

	int tmp = test_mem(s1, s3, sizeof(s1));
	if (tmp)
		printf(RED"Test strcat failed at %d\n"EOC, tmp);
	else
		printf(GREEN"Test strcat passed.\n"EOC);
	return (1);
}

int	test_memset()
{
	char s1[255], s2[255];
	
	memset(s1, 0x123456, sizeof(s1));
	ft_memset(s2, 0x123456, sizeof(s2));

	int tmp = test_mem(s1, s2, sizeof(s1));
	if (tmp)
		printf(RED"Test memset failed at %d\n"EOC, tmp);
	else
		printf(GREEN"Test memset passed.\n"EOC);
	return (1);
}

int test_cat()
{
	int fd;

	fd = open("./Makefile", O_RDONLY);
	if (fd > 0)
	{
		errno = 0;
		printf("%d\n",ft_cat(fd));
		printf("%d\n", errno);
		perror(errno);
	}
	else
	{
		printf(RED"test cat: failed to open file\n"EOC);
	}
	return (0);
}

int main()
{
	test_bzero();
	test_types();
	test_toupper();
	test_tolower();
	test_puts();
	test_strcat();
	test_memset();
	test_cat();
	printf("test: %s\n", ft_strdup("bon ecoute"));
	return (0);
}
