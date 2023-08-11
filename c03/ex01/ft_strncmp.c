/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 14:15:26 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 15:26:26 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    
	 char s1[]= "Hlkjhio";
	 char s2[]= "HlKjhi";
          int x,y;

      	x = ft_strncmp(s1,s2,2);
	y = strncmp(s1,s2,2);
         printf("%d",x);
        printf("%d",y);
}*/
