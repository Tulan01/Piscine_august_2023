/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:03:31 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/23 13:37:14 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf);
int		ft_len_nb(int nbr, char *base);

int	ft_checkerror(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_nb_base(char str, char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
	{
		if (str == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	whitespaces(char *str, int *p_i)
{
	int	count;
	int	i;

	i = 0;
	count = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			count *= -1;
		i++;
	}
	*p_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count;
	int	n;
	int	n2;
	int	base_lenght;

	n = 0;
	i = 0;
	base_lenght = ft_checkerror(base);
	if (base_lenght >= 2)
	{
		count = whitespaces(str, &i);
		n2 = ft_nb_base(str[i], base);
		while (n2 != -1)
		{
			n = (n * base_lenght) + n2;
			i++;
			n2 = ft_nb_base(str[i], base);
		}
		return (n *= count);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*fln;
	int		mnb;
	int		len_nb;

	if (ft_checkerror(base_to) == 0 || ft_checkerror(base_from) == 0)
		return (0);
	mnb = ft_atoi_base(nbr, base_from);
	len_nb = ft_len_nb(mnb, base_to);
	fln = (char *)malloc(sizeof(char) * (len_nb + 1));
	if (!fln)
		return (0);
	ft_putnbr_base_v2(mnb, base_to, fln);
	fln[len_nb] = '\0';
	return (fln);
}

/*#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}*/
