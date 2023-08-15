/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:10:14 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 12:36:55 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int str_len(char *str){
    int i = 0;

    while (str[i]){
	    i++;
    }
    return (i);
}


int main (int argc, char *argv[]){
 
	int i = 0;
	int j = 0;
	int count = 0;
	if( argc == 3){

         while(argv[1][i]){
	       j = 0;
      		while (argv[2][j]){
	 		if(argv[1][i] == argv[2][j]){
		            count++;
	    		    break;		    
			}
			j++;
		}
		i++;
	 }
	 int len;
	 len = str_len(argv[1]);
         i = 0;
	 if (len == count){
		 while(argv[1][i]){
			 write(1, &argv[1][i],1);
			   i++;
			}
		}
         }
	 write(1, "\n",1);

	 return (0);
	 }
