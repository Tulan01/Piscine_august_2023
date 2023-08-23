/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 20:02:59 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/20 21:07:04 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int is_alpha(char c){
    
    int cns = 0;
    if(c >= 'a' && c <= 'z'){
           cns = 1;
    }
    else if (c >= 'A' && c <= 'Z'){
           cns = 1;
    }

    return (cns);

}

char ft_lower(char c){

    if(c >= 'A' && c <= 'Z'){
	    c += 32;
      }
    return (c);
}



void ft_count_alpha(char *str){
      
	int count[26] = {0};
	int i = 0;

 	while(str[i]){

             if(is_alpha(str[i]) == 1) {
            char c = ft_lower(str[i]);
	      count[c - 'a']++;
	    }
	  i++;
           }

	i = 0;
       int first = 1;

	while(i < 26){
        if(count[i] > 0){
            if (!first) {
                printf(", ");
            }
            printf("%d%c", count[i], 'a' + i);
            first = 0;
        }
	    /* char d = 'a'+i;
	     char y = 'a'+(i+1);
	     char x = count[i] + 48;
	 write(1,&x,1);
	 write(1,&d,1);
	 if(y != '\0'){
         write(1," ,",2);
	 }*/
	i++;
	}
}


int main (int argc, char *argv[]) {
   
    if(argc == 2){
      ft_count_alpha(argv[1]);
    }
    else{
	     printf("\n");
	}
}
