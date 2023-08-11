/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:02:34 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 17:50:04 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
	{
		return (str);
	}
	while (str[i])
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
		{
			return (str + i);
		}
		i++;
		j = 0;
	}
	return (0);
}

/*#include<unistd.h>
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    
	char s1[]= "Hello boy like me ";
	char s2[]= "boy";

	
       // int i = 0 ;
    ft_strstr(s1,s2);
        //strcat(s1,s2);
     printf("%s", ft_strstr(s1,s2));
}*/
