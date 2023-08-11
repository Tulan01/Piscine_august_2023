/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:10:35 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/09 12:18:54 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int main (){
    char str1[] = "Hello world";
    char str2[30] = "hi";
    int i = 0;

    ft_strcpy(str1,str2);

     i =0 ;
    while (str2[i] != '\0'){
       write (1, &str2[i], 1);
       i++;
     } 
}*/
