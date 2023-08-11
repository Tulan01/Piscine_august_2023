/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 19:51:21 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 15:05:12 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
    
	 char s1[]= "Bangla";
	 char s2[]= "BanglA";
          int x,y;

	x = ft_strcmp(s1,s2);
	y = strcmp(s1,s2);
       printf("%d",x);
       printf("%d",y);
}*/
