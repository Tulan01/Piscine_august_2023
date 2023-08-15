/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:38:53 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 12:59:18 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int ft_abs(int x){
    
	if(x < 0){
          x= x*-1;		  
	}	
     return (x);

}

int *ft_range(int start, int end){

    int i = 0;
    int *tab;
    int *d;
    int size;

    size = ft_abs(end - start) + 1;

    d =(tab = malloc(size * sizeof(int)));

    if(!d){
	    return (0);
    }
    if (size == 1){
        tab[0] = start;
    }
    if(start < end){
	    while(i < size){
		    tab[i] = start + i;
		    i++;
	    }
    }
    i = 0 ;
    if( end < start){
	    while (i < size){
		    tab[i]= start - i;
		    i++;
	    }
     }

   return (tab);
}


int main () {

    int start = -2;
    int end = 2;
    int size;
    int *tab;
    int i =0 ;

    size = ft_abs(end - start) + 1;

    tab = ft_range(start,end);

    while ( i < size){
      
       printf("%d ",tab[i]);
       i++;
    }


}
