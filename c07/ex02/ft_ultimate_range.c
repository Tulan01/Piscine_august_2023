/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:14:12 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/16 19:45:21 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	i = 0;
	size = max - min;
	if (size < 0)
	{
		*range = 0;
		return (0);
	}
	tab = malloc (size * sizeof (int));
	if (!tab)
	{
		*range = 0;
		return (-1);
	}
	*range = tab;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	return (size);
}

/*int main () {
    
	int min = -2;
	int max = 2;
	int *tab;
        int size;
	int i = 0;

	size = ft_ultimate_range(&tab,min,max);

	while( i < size){
		printf("%d ",tab[i]);
		i++;
        }

}*/
