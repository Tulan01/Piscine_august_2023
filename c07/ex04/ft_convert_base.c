/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:03:52 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/23 13:33:56 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_len_nb(int nbr, char *base)
{
	int				base_lenght;
	int				lenght;
	unsigned int	nb;

	lenght = 0;
	base_lenght = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		lenght++;
	}
	else
	{
		nb = nbr;
		while (nb >= (unsigned)base_lenght)
		{
			nb /= base_lenght;
			lenght++;
		}
	}
	lenght++;
	return (lenght);
}

void	ft_putnbr_base_v2(int nbr, char *base, char *nbrf)
{
	int		len_base;
	long	nb;
	int		i;
	int		len_nb;

	len_base = ft_strlen(base);
	len_nb = ft_len_nb(nbr, base);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nb--;
	while (nb >= len_base)
	{
		nbrf[len_nb] = base[nb % len_base];
		nb /= len_base;
		len_nb--;
	}
	if (nb < len_base)
		nbrf[i] = base[nb];
}
