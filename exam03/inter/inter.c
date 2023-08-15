/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:19:09 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/14 19:33:31 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
 
int check_double(char *str, char c, int index){
   
         int i = 0;
      while (i < index){
              if(str[i] == c){
		 return (0);
            }	      
          i++;
      }
      return (1);

}



void inter( char *str1 , char *str2){
     

	int i ;
        int j;
         i = 0 ;

	while(str1[i] != '\0'){
          j = 0;
	   while (str2[j]){

		   if (str1[i] == str2[j]){
                    // printf("%d",7);
                      if( check_double(str1,str1[i],i) == 1)
		      {
			      write(1, &str1[i], 1);
				      break ;
		         }
		   }
           j++;
	   }
        
	i++;          
        }

}  


int main (int ac, char *av[]) {
  
      if (ac == 3 ){
           inter(av[1],av[2]);
		}
       else{
	       write(1,"\n", 1);
       }
}
