/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:55:50 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/07 16:07:49 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		size--;
		i++;
	}
}

/*int     main()
{
    int  a = 5;
    int  x[5]={1,2,3,4,5};

    ft_rev_int_tab(x,a);
    printf("%d, %d, %d, %d, %d", x[0], x[1], x[2], x[3], x[4]); 

}*/
