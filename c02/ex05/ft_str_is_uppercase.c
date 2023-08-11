/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:25:14 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/08 12:39:46 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	cst;

	i = 0;
	cst = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
  char str1[] = "ABCD";
   int g;
  //char str3[] = "hello world";
   
 g = ft_str_is_uppercase(str1);
  printf("%d",g);
    
}*/
