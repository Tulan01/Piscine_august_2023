/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:49:00 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/22 18:58:09 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	result;

	if (size == 0)
		return (1);
	i = 0;
	result = 0;
	while (i < size)
		result += ft_strlen(strs[i++]);
	result += ft_strlen(sep) * (size - 1);
	return (result + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;

	result = malloc(get_size(size, strs, sep) * sizeof(char));
	if (!result)
		return (NULL);
	result[0] = 0;
	if (size == 0)
		return (result);
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i != size - 1)
			ft_strcat(result, sep);
		i++;
	}
	result[ft_strlen(result)] = 0;
	return (result);
}

/*#include<stdio.h>

int main () {

         char **strs;
         int size = 3;
         char *result;

         char *sep;
         sep = " ";
         strs = (char **)malloc(size * sizeof(char *));
         strs[0] = "Hello";
         strs[1] = "World";
         strs[2] = "bonjour";
         result = ft_strjoin(size,strs,sep);

         printf("%s$\n", result);
         free(result);
}*/
