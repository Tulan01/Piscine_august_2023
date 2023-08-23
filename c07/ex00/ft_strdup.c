/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:20:29 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/22 19:42:35 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = str_len (src);
	tab = (char *)malloc (len * sizeof (char) + 1);
	if (!tab)
	{
		return (0);
	}
	while (src[i])
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

/*int main () {
	char	*allocate;
	char	str[] = "42 Itssdasdas ccwef";
        int i = 0;
    allocate = ft_strdup(str);
    while ( allocate[i]){
    printf("%c", allocate[i]);
        i++;
    }
}*/
