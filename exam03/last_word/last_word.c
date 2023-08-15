/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:36:51 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 20:10:04 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void last_word(char *str){

     int i = 0 ;
 
    while(str[i]){
          i++;
    }  
   int len = i-1 ;
      //i = 0;
     
	while(str[len] == 32 || str[len] == '\t'){
		     len--;
  		   }
        while (len > 0){
	       if(str[len] == 32 || str[len] == '\t'){
                    break;
	        }
		len--;
          }
      len ++;
     while(str[len] != '\0' && str[len] != 32 && str[len] != '\t'){
          write(1, &str[len], 1);      
           len++;
     }
}

int main (int argc, char *argv[]){

      if (argc == 2){
           last_word(argv[1]);
      }
      else{
	  write(1, "\n",1);
      }

   return (0);
}
