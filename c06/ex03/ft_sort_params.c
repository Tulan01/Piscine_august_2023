/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:55:39 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/10 19:27:37 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>
#include<string.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while (str[i] || str2[i])
	{
		if (str[i] == str2[i])
		{
			i++;
		}
		if (str[i] < str2[i] || str[i] > str2[i])
		{
			return (str[i] - str2[i]);
		}
	}
	return (0);
}

void	ft_swap(char **str, char **str2)
{
	char	*temp;

	temp = *str;
	*str = *str2;
	*str2 = temp;
}

int	main(int argc, char *argv[])
{
	int	x;
	int	j;
	int	i;

	x = 1;
	while (x < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				ft_swap(&argv[j], &argv[j + 1]);
			}
			j++;
		}
		x++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
