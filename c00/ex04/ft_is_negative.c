/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:40:56 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/05 19:46:36 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int x)
{
	if (x >= 0)
	{
		write (1, "P", 1);
	}
	else
	{
		write (1, "N", 1);
	}
}

/*int	main(void)
{
	int	a; 
	
	a = -1;
	ft_is_negative (a);
	return (0);
}*/