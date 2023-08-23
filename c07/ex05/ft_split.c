/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:35:18 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/23 13:38:22 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_separator(char *charset, char c)
{
	int	x;
	int	i;

	i = 0;
	x = 0;
	while (charset[i])
	{
		if (c == charset[i])
		{
			x = 1;
		}
		i++;
	}
	return (x);
}

int	word_count(char *str, char *charset)
{
	int	in_words;
	int	count;
	int	i;

	i = 0;
	in_words = 0;
	count = 0;
	while (str[i])
	{
		if (is_separator(charset, str[i]) == 1)
			in_words = 0;
		else
		{
			if (in_words == 0)
			{
				in_words = 1;
				count++;
			}
		}
		i++;
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**result;
	int		i;

	words = word_count(str, charset);
	result = (char **)malloc((words + 1) * sizeof (char *));
	if (!result)
		return (0);
	i = 0;
	while (*str)
	{
		while (is_separator (charset, *str) == 1)
		{
			*str = '\0';
			str++;
		}
		if (*str)
		{
			result[i++] = str;
			while (*str && is_separator(charset, *str) == 0)
				str++;
		}
	}
	result[i] = 0;
	return (result);
}

/*int main () {

   char str[] = "I am|a,boy";
   char charset [] = ",| ";
   int i = 0;

   char **result;
   result = ft_split(str,charset);

   if(result){
	   while(result[i]){
		   printf("%s\n",result[i]);
		   i++;
	   }
	  // printf("%d\n",0);
   }

   free(result);

   return (0);

}*/
