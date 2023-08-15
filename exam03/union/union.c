/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 11:42:27 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 12:06:13 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>


int ft_check_double(char *str, char c, int index){

          int i = 0;

	  while(i < index){
             if (str[i] == c){
		     return(0);
	     }
	     i++;
           }
   return (1);

}

int ft_check_double2(char *str, char c){

       int i = 0;
      while(str[i]){
       if (str[i] == c){
 	 return (0);
      }
       i++;
      }
      return (1);
}
void ft_union(char *str, char *str2){

	int i = 0;

        while(str[i]){
		if(ft_check_double(str,str[i],i) == 1){
                       write(1, &str[i], 1);
		}
		i++;
	}

	i = 0;
	while(str2[i]){
              if(ft_check_double2(str,str2[i]) == 1){

		      if(ft_check_double(str2,str2[i],i) == 1){

			      write(1, &str2[i], 1);
		      }
	      }
          i++;
	}
}

int main (int argc, char *argv[]){

     if(argc==3){

        ft_union(argv[1],argv[2]);

     }

     write(1, "\n",1);

}
