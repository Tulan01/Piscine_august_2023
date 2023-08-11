/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:46:10 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 16:53:52 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[n] && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

/*#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
	char s1[]= "Hello";
	char s2[]= "world";

	
        int i = 0 ;
    ft_strncat(s1,s2,3);
        //strcat(s1,s2);
      printf("%s",s1);
}*/
