/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 13:30:18 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 12:46:57 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

char	*ft_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cst;

	i = 0;
	cst = 1;
	ft_lowcase (str);
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (cst == 1)
			{
				str[i] = str[i] - 32;
				cst = 0;
			}
		}
		else if (str[i] >= 48 && str[i] <= 57)
			cst = 0;
		else
			cst = 1;
		i++;
	}
	return (str);
}

/*int 	main () {

   char str1[] = "55salut, !!cava. 5tu vas-bien";
   int i = 0;
   ft_strcapitalize(str1);
   while (str1[i]){
    write (1, &str1[i], 1);
    i++;
   }
}*/
