/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 15:00:58 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/21 11:34:33 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < 47000 && i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

/*#include<stdio.h>

int main () {

	printf("%d -> %d\n", -2316, ft_find_next_prime(-2316));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
	printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
	printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
	printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
	printf("%d -> %d\n", 370091, ft_find_next_prime(370091));
	printf("%d -> %d\n", 188423, ft_find_next_prime(188423));
	printf("%d -> %d\n", 244239, ft_find_next_prime(244239));
	printf("%d -> %d\n", 168976, ft_find_next_prime(168976));
	printf("%d -> %d\n", 216082, ft_find_next_prime(216082));
	printf("%d -> %d\n", 2189, ft_find_next_prime(2189));
	printf("%d -> %d\n", 61463, ft_find_next_prime(61463));
	printf("%d -> %d\n", 148515, ft_find_next_prime(148515));
	printf("%d -> %d\n", 150620, ft_find_next_prime(150620));
	printf("%d -> %d\n", 220714, ft_find_next_prime(220714));
	printf("%d -> %d\n", 373814, ft_find_next_prime(373814));
	printf("%d -> %d\n", 251964, ft_find_next_prime(251964));
	printf("%d -> %d\n", 152126, ft_find_next_prime(152126));
	printf("%d -> %d\n", 13383, ft_find_next_prime(13383));
	printf("%d -> %d\n", 177754, ft_find_next_prime(177754));
	printf("%d -> %d\n", 100956, ft_find_next_prime(100956));
	printf("%d -> %d\n", 267880, ft_find_next_prime(267880));
	printf("%d -> %d\n", 421488, ft_find_next_prime(421488));
	printf("%d -> %d\n", 176753, ft_find_next_prime(176753));
	printf("%d -> %d\n", 119928, ft_find_next_prime(119928));
	printf("%d -> %d\n", 214650, ft_find_next_prime(214650));
	printf("%d -> %d\n", 409215, ft_find_next_prime(409215));
	printf("%d -> %d\n", 163456, ft_find_next_prime(163456));
	printf("%d -> %d\n", 194689, ft_find_next_prime(194689));
	printf("%d -> %d\n", 28808, ft_find_next_prime(28808));
	printf("%d -> %d\n", 372877, ft_find_next_prime(372877));
}*/
