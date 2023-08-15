/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:55:00 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 14:10:52 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int *ft_range(int min, int max){
     int i;
     int *tab;
     int *d;
     int size;

     size = (max-min);
     if(min >= max){
	 return (0);
     }
     else{

	d =(tab = malloc(size * sizeof(int)));
       if (!d){
         return (0);
       }
 	i = 0;       
     
       while ( i < size){    
           tab[i] = min + i;
 		i++;
       }

       return (tab);

     }
}


int main() {
    
   int min = 2;
   int max = 5;
   int *tab;


  tab = ft_range(min,max); 
    int i = 0 ;

    while( i < (max -min)){
	    printf("%d ",tab[i]);
	    i++;
    }

}
