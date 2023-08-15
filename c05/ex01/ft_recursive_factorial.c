/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:56:50 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/13 15:29:48 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb <= 0)
	{
		return (0);
	}
	if (nb > 0)
	{
		result = nb * ft_recursive_factorial (nb - 1);
	}
	return (result);
}

/*#include<stdio.h>

int main () {

printf("%d", ft_recursive_factorial(3));

}*/
