/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 15:27:21 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 16:45:30 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[n])
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
    ft_strcat(s1,s2);
        //strcat(s1,s2);
      printf("%s",s1);
}*/
