/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 19:51:33 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/07 14:48:48 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	print(char x)
{
	write (1, &x, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print ((char)(a / 10) + '0');
			print ((char)(a % 10) + '0');
			write (1, " ", 1);
			print ((char)(b / 10) + '0');
			print ((char)(b % 10) + '0');
			if (a != 98)
			{
				write (1, ", ", 1);
				write (1, " ", 1);
			}
			b++;
		}
		a++;
	}
}

/*int	main () {
    ft_print_comb2();
    return(0);
    
}*/
