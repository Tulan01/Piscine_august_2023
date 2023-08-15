/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 13:59:52 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/13 15:57:01 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	index;
	long	number;

	number = nb;
	if (number <= 0)
	{
		return (0);
	}
	if (number == 1)
	{
		return (1);
	}
	index = 2;
	if (number > 1)
	{
		while (index <= number)
		{
			if (index * index == number)
			{
				return (index);
			}
			index ++;
		}
	}
	return (0);
}

/*int main () {

    printf("Sqr root of %d  is : %d", 49, ft_sqrt(49));


}*/
