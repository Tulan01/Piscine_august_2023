/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-aff_z.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:48:27 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 15:19:35 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int main(int argc, char *av[]){
	 int i ;
	 i = 0;
	 
   
 	if(argc == 2){
		while(av[1][i]){
			if(av[1][i] == 'a'){
				write(1, &av[1][i], 1);
				break;
    				}
			i++;
		}
		write(1,"\n",1);
       }
       else {
	write(1,"a",1);
       write(1,"\n",1);
       }
       return(0);

}

