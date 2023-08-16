/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 13:25:09 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/16 17:04:20 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>

int ft_len(int nbr){
      int len = 0;

	if( nbr < 0){
            nbr *= -1;
            len ++;
	}

	while (nbr > 0){
		nbr = nbr/10;
		len ++;
	}
    return (len);
}



char	*ft_itoa(int nbr){

       int i = 0;
       int len;
       char *str;
       char *d;
       len = ft_len(nbr);

    printf("%d", len);

    d = (str=(char *)malloc((len + 1) * sizeof(char *)));

    str[len] = '\0';
    len--;
  
    if(!d){
	    return (0);
    }
    else{
	  if(nbr == 0){
	    str[i] = 48 ;
	    return (str);
	  }
	  if(nbr < 0){
	     str[i] = '-';
	     nbr *= -1;
	  }
	  while (nbr > 0){
             str[len] = 48 + (nbr % 10);
	      nbr = nbr / 10;
	      len--;
	     // printf("%c",str[i]);
	  }
     return(str);
    }
}

int main () {

   printf("%s",ft_itoa(14));
  
}
