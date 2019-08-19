/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niragne <niragne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:18:59 by niragne           #+#    #+#             */
/*   Updated: 2019/08/19 11:46:07 by niragne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

#define BZERO_TEST_LEN 655000
#define PUTS_TEST_1 "Salut, ça va ?"

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
			printf("BZERO FAILED AT %d\n", i);
			return i;
		}
        i++;
    }
	printf("Test bzero passed.\n");
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
			printf("ISALPHA FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test isalpha passed with %d errors.\n", errors);
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
			printf("ISDIGIT FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test isdigit passed with %d errors.\n", errors);
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
			printf("ISALNUM FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test isalnum passed with %d errors.\n", errors);
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
			printf("ISASCII FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test isascii passed with %d errors.\n", errors);
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
			printf("ISPRINT FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test isprint passed with %d errors.\n", errors);
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
			printf("isupper FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test isupper passed with %d errors.\n", errors);
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
			printf("islower FAILED AT %d\n", i);
			errors++;
		}
		i++;
	}
	printf("Test islower passed with %d errors.\n", errors);
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
			printf("TOUPPER FAILED AT %d (returned %x, expected %x)\n", i, ft_toupper(i), toupper(i));
			errors++;
		}
		i++;
	}
	printf("Test toupper passed with %d errors.\n", errors);
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
			printf("tolower FAILED AT %d (returned %x, expected %x)\n", i, ft_tolower(i), tolower(i));
			errors++;
		}
		i++;
	}
	printf("Test tolower passed with %d errors.\n", errors);
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

int main()
{
	test_bzero();
	test_types();
	test_toupper();
	test_tolower();
	test_puts();
	return (0);
}
