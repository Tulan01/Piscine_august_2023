/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roton.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 17:56:54 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 18:15:00 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void roton(char *str){
	int i;
	i = 0;
	  while( str[i]){
               if((str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <='Y')){
                          str[i] += 1;
            } 
	   else if(str[i] == 'z' || str[i] == 'Z'){
                          str[i] -= 25;
            }
	   write(1, &str[i],1);
	   i++;
	  }


}

int main (int ac, char *av[]){

      if(ac ==2){
        roton(av[1]);
      }

      write(1,"\n",1);
      return (0);
}
