/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:19:28 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/08 12:36:57 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	cst;

	i = 0;
	cst = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
  char str1[] = "AW";
   int g;
  //char str3[] = "hello world";
   
 g = ft_str_is_lowercase(str1);
  printf("%d",g);
    
}*/
