/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:42:56 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/10 13:09:58 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sign(char *str, int *pr_i)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (str[i] && str[i] >= 9 && str[i] <= 13 || str[i] == 32)
	{
		i++;
	}
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count *= -1;
		}
		i++;
	}
	*pr_i = i;
	return (count);
}

int	ft_atoi(char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	sign = ft_sign (str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10 ;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}

/*int main () { 
    char s1[] = "+++---01234506789ab567";
     printf("%d",ft_atoi(s1));
}*/
