/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 13:11:58 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/07 16:13:04 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	a;

	while (i < 6)
	{
		j = i + 1;
		while (j < 6)
		{
			if (tab[i] > tab[j])
			{
				a = tab [i];
				tab[i] = tab[j];
				tab[j] = a;
			}
			j++;
		}
		i++;
	}
}

/*int     main()
{
   int x[6]= {3,2,1,4,5,0};
   int size = 6;
   int i = 0;
    

   ft_sort_int_tab(x,size);
   i = 0;
   while(i < 6){
   printf("%d", x[i]);
   i++;
 }
}*/
