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

void ft_bzero(void *s, size_t size);
int ft_strlen(char *s);

void    test_bzero(void *s, size_t n)
{
    int i = 0;
    
    char *ptr = (char*)s;
    while (i < n)
    {
        printf("%x ", ptr[i]);
        i++;
    }
    printf("\n");
}

int main()
{
    char s[200];
    memset(s, 'a', sizeof(s));
    test_bzero(s, sizeof(s));
    ft_bzero(s, sizeof(s));
    test_bzero(s, sizeof(s));

    char a[250];
    memset(a, 'a', sizeof(a));
    a[249] = 0;
    printf("strlen = %d ft_strlen  = %d\n", ft_strlen(a), ft_strlen(a));
}