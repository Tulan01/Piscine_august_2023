/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:47:22 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 17:30:13 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int ft_strlen(char *str){

        int i = 0;

   while( str[i]){
        i++;
   }	   
   return(i);
}

char	*ft_strjoin(int size, char **strs, char *sep){
          int j = 0;
	  int len =0;
	  int fl_len = 0;
	  int i = 0;
	  int n;

	  char *tab;
	  char *d;

	if(size == 0){
       return ((char *)malloc(sizeof(char)));
	}
	else{
		  while(i < size){
			 len = ft_strlen(strs[i]);
			 fl_len = len + ft_strlen(sep);
			 i++;
		  }
	  }	
       fl_len ++;

       d =(tab =(char *)malloc(fl_len * sizeof(char)));

       if(!d){
          return (0);
       }
       i = 0;
       n = 0;
       while(i < size){
	       j = 0;
	     while (strs[i][j]){
 		 tab[n] = strs[i][j];
		 j++;
		 n++;
           	 }
	      j = 0;
	     while(sep[j]){
                tab[n] = sep[j];
		j++;
		n++;
	        }
	   i++;
        }
     tab[n] = '\n';

    return ( tab);


}



int main () {
   
	 char **strs;
	 int size = 3;
	 char *result;

         char *sep;
	 sep = "  ";
	 strs = (char **)malloc(size * sizeof(char *));
	 strs[0] = "Hello";
	 strs[1] = "World";
	 strs[2] = "bonjour";
         result = ft_strjoin(size,strs,sep);

	 printf("%s$\n", result);
	 free(result);
}
