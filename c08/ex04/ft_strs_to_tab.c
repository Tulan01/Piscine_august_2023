/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 20:06:41 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/22 20:43:56 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	int len;
	char	 *tab;
	int	i;

	i = 0;
	len = strlen(str);
      tab = (char *)malloc((len + 1) * sizeof(char));
      if(!tab)
      {
	      return (0);
      }
      while(str[i]){
	      tab[i] = str[i];
	      i++;
      }
      tab[i] = 0;
      return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int i;
        t_stock_str *tab;
	
	if(ac < 0)
	{
		ac = 0;
	}
	tab = malloc((ac+1)* sizeof(t_stock_str));
        if (!tab)
	{
		return(0);
	}
	i = 0;
	while (i < ac)
	{
            tab[i].size = ft_strlen(av[i]);
            tab[i].str = av[i];
	    tab[i].copy = ft_strdup(tab[i].str);
	    i++;
        }
	tab[i].str = 0;
	return (tab);
}

/*int main(int argc, char *argv[]){

	struct s_stock_str	*structs;

        structs = ft_strs_to_tab (argc,argv);
	int index = 0;
	 while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %s\n", structs[index].str, structs[index].str);
		printf("\t|   copied : $%s$ @ %s\n", structs[index].copy, structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}

}*/
