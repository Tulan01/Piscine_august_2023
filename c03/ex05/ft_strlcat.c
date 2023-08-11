/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:53:14 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 20:54:45 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
	{
		i++;
	}
	if (size > 0)
	{
		while (src[n] && n < size)
		{
			dest[i + n] = src[n];
			n++;
		}
		dest[i + n] = '\0';
	}
	return (i + n);
}

/*#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int     main() {

    char s1[] = "hello";
    char s2[]= "world";
    int x ;
    x = ft_strlcat(s1,s2,3);
    printf("%d\n",x);
}*/
