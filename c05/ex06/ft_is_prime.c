/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:10:45 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/13 16:02:47 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb <= 1)
	{
		prime = 0;
	}
	if (nb > 1)
	{
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				prime = 0;
				break ;
			}
			i++;
		}
	}
	return (prime);
}

/*#include<stdio.h>
int main () {
 	
  printf("for %d -> %d ", 7, ft_is_prime(9));
}*/
