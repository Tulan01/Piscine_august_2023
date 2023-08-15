/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:00:58 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/13 16:08:36 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	prime;

	i = 2;
	prime = 1;
	if (nb <= 1)
		prime = 0;
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
	if (prime == 0)
		ft_find_next_prime (nb + 1);
	else
		return (nb);
}

/*#include<stdio.h>

int main () {

  printf("for %d -> %d ", 7, ft_find_next_prime(11));
}*/
