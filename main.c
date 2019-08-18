/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niragne <niragne@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 15:18:59 by niragne           #+#    #+#             */
/*   Updated: 2019/08/17 18:04:40 by niragne          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

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

int	test_isalpha()
{
	int i = 0;

	while (i < CHAR_MAX)
	{
		if (isalpha(i) && (!ft_isalpha(i)) || (!isalpha(i) && ft_isalpha(i)))
			return i;
		i++;
	}
	return 0;
}

int main()
{
	int tmp;
	char a[300];
	char b[300];
	bzero(a, sizeof(a));
	ft_bzero(b, sizeof(b));
	printf("Test bzero: ");
	if ((tmp = test_mem(a, b, sizeof(a))))
		printf("FAILED at %d\n", tmp);
	else
		printf("SUCCESS\n");
	printf("Test isalpha: ");
	if ((tmp = test_isalpha()))
		printf("FAILED AT %d\n", tmp);
	else
		printf("SUCCESS\n");

	return (0);
}
