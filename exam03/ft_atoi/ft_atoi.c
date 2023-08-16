/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:16:06 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/16 17:29:28 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include<unistd.h>

int ft_atoi(const char *str){

      int i = 0;
      int len = 0;
      int sign = 1;
      int result = 0;

      while((str[i] >= 9 && str[i] <= 13) || str[i] == 32){
                  i++; 
      }
      if( str[i] == 43){
	      i++;
      }
      else  if(str[i] == 45){
	      sign *= -1;
	      i++;
       }
      while(str[i] && str[i] >= 48 && str[i] <= 57){
	      result *= 10;
 	      result += str[i] - 48;
              i++;
      } 
     return (result * sign);
}


int main () {

   char *str = "+12345rtg";
   printf("%d",ft_atoi(str));
}
