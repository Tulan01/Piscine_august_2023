/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:13:15 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/13 15:19:39 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result = nb * result;
		nb --;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}

/*int main (void)
{
	printf("%i", ft_iterative_factorial(3));
}*/
