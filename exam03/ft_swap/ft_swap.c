/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:36:03 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 15:38:44 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_swap(int *a, int *b){
      
          int temp;
	  temp = *a;
	  *a = *b;
	  *b = temp ;
}


int main() {

     int a , b;
     a = 2;
     b = 3;

    ft_swap(&a,&b);

    printf("%d %d",a,b); 


}
