/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:42:43 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/08 12:46:47 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	cst;

	i = 0;
	cst = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			cst = 1;
		}
		else
		{
			cst = 0;
			break ;
		}
		i++;
	}
	if (cst == 2 || cst == 1)
		return (1);
	else
		return (0);
}

/*int main (){
  char str1[] = "€";
   int g;
  //char str3[] = "hello world";
   
 g = ft_str_is_printable(str1);
  printf("%d",g);
    
}*/
