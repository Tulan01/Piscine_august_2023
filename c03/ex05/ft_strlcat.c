/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:53:14 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/12 17:59:51 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_slen(char *src){
	int	j;

	j = 0;
	while (src[j])
	{
		j++;
	}
	return (j);
}


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)

{
	unsigned int	i;
	unsigned int	n;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	n = 0;
	slen = ft_slen(src);
	while (dest[i])
	{
		i++;
	}
	dlen = i;
	if (size == 0 || size <= dlen){
          return ( slen + size);
	}
        else
	{
		while (src[n] &&  n < size -dlen -1)
		{
			dest[dlen] = src[n];
			n++;
			dlen++;
		}
		dest[dlen] = '\0';
 		return (dlen + slen);
	}
}

/*#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

int     main() {

    char s1[] = "hellouio";
    char s2[]= "wore";
    int x;
    int y;
    x = ft_strlcat(s1,s2,9);
    y = strlcat(s1,s2,9);
    printf("%d\n",x);
    printf("%d",y);
}*/
