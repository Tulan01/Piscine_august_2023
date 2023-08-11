/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:34:36 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/08 12:28:52 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	cst;

	i = 0;
	cst = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 && str[i] <= 57)
			cst = 2;
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
  char str1[]="895";
   int g,i;
  //char str3[] = "hello world";
  while(str1[i] != '\0')
  {
  	write(1, &str1[i], 1);
	i++;
  }
 g = ft_str_is_numeric(str1);
  printf("%d",g);
    
}*/
