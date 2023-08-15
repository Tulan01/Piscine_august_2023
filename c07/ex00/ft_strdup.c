/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:20:29 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 13:52:16 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int str_len(char *str){
	int	i;

	i = 0;

	while(str[i]){
		i++;
	}
	return (0);
}

char *ft_strdup(char *src){
	
	int i ;
	int len;

	char *d;
	char *tab;

	len = str_len(src) + 1;

      d = (tab = (char *)malloc(len * sizeof(char)));

    if(!d){
	  return (0);
    }
    while (src[i]){
	    tab[i] = src[i];
	    i++;
    }
    tab[i]= '\0';

    return(tab);
}



int main () {
	char	*allocate;
	char	str[] = "42 It";
        int i = 0;
    allocate = ft_strdup(str);
    while ( allocate[i]){
    printf("%c", allocate[i]);
        i++;
    }
}
