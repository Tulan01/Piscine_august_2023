/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:42:56 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 14:09:51 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10 ;
		result += str[i] - 48;
		i++;
	}
	return (result * sign);
}

/*#include<stdio.h>
#include<string.h>

int main () { 
    char s1[] = "--+--01234506789ab567";
     printf("maide one : %d\n",ft_atoi(s1));
    // printf("The real one : %d",atoi(s1));
}*/
