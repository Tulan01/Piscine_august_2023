/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:40:51 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 15:47:11 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include<unistd.h>
 #include<stdio.h>
#include<string.h>

char *ft_rev_print (char *str){

    int i;
    int len;
    char temp;
     
    i = 0;
    while (str[i]){
	    i++;
    }
    len = i-1;
    i = 0;
    while(i < len){
          temp = str[i];
	  str[i]= str[len];
	  str[len] = temp;
	  i++;
	  len--;
    }
    return (str);
}

int main () {

   char str[] = "abcd";

    ft_rev_print(str);
  printf("%s",str);
}
