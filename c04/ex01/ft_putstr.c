/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 11:49:31 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/10 11:57:40 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

/*#include<stdio.h>
#include<string.h>

int main () {
     char s1[] = "42 like it";
     int x,y;
       ft_putstr(s1);
      //y = strlen(s1);
     // printf("%d", x);
}*/
