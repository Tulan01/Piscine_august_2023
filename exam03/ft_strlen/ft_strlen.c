/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:30:25 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 15:33:35 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str){
    int i;
    i = 0;
     while(str[i]){
        i++;
     }
    return (i); 
}

int main ()  {
    char str[] = "abcd";
    
	printf("%d",ft_strlen(str));
   
}
