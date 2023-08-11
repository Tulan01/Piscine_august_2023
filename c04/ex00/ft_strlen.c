/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:41:24 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/10 11:47:39 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*#include<unistd.h>
#include<stdio.h>
#include<string.h>

int main () {
     char s1[] = "42 like it";
     int x,y;
      x = ft_strlen(s1);
      //y = strlen(s1);
      printf("%d", x);
}*/
