/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:47:22 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/16 20:53:55 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_calvalue(char **strs, char *result, char *sep, int size)
{
	int	i;
	int	pos;
	int	j;

	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			result[pos++] = strs[i][j++];
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				result[pos++] = sep[j++];
			}
		}
		i++;
	}
	result[pos] = '\0';
	return (result);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*result;

	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	total_len += ft_strlen (sep) + 1;
	result = (char *)malloc (total_len * sizeof (char));
	if (!result)
	{
		return (NULL);
	}
	result = ft_calvalue (strs, result, sep, size);
	return (result);
}

/*int main () {
   
	 char **strs;
	 int size = 3;
	 char *result;

         char *sep;
	 sep = "  ";
	 strs = (char **)malloc(size * sizeof(char *));
	 strs[0] = "Hello";
	 strs[1] = "World";
	 strs[2] = "bonjour";
         result = ft_strjoin(size,strs,sep);

	 printf("%s$\n", result);
	 free(result);
}*/
