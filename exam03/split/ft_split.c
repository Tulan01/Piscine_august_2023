/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 19:02:39 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/15 19:25:42 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int char_count(char *str){

       int i = 0;
       int c = 0;
       while(str[i]){
        if(str[i] == 9 || str[i] == 10 || str[i] == 32){
            c++;
	}
	i++;
       }
       return (c);

}
char    **ft_split(char *str){
       int i;
       int j = 0;
       i = 0;
       int c;
       c = char_count(str);

      char **strs;
      strs =(char **)malloc(c* sizeof(char *));
      
       while(i < c){
	       j = 0;
	       while(str[j]){
		strs[i][j] = str[j];
		j++;
	       }
	       i++;
       }

       return(strs);

}

int main () {
    
	char str[] = "Bonjour Paris";
        char **strs;
	strs = ft_split(str);
	int i = 0;
	int j = 0;
        int  c = char_count(str);
	while(i < c){
		while(strs[i][j]){
			printf("%c",strs[i][j]);
			j++;
		}
		i++;
	}
}
