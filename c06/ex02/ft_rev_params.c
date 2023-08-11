/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:39:51 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/10 16:50:12 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = argc -1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write (1, &argv[i][j], 1);
			j++;
		}
		write (1, "\n", 1);
		i--;
	}
	return (0);
}
