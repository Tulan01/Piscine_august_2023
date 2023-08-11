/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 22:22:11 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/07 15:47:43 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main()
{  
     int a;
     int b;

     int c;
     int d;

     a=10;
     b=5;

    ft_div_mod(a,b,&c,&d);
    printf ("%d", c);
  
}*/
