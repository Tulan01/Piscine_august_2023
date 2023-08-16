/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:28:15 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/16 22:06:17 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_separator(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

int count_words(char *str) {
    int count = 0;
    bool in_word = false;

    while (*str) {
        if (is_separator(*str)) {
            in_word = false;
        } else {
            if (!in_word) {
                in_word = true;
                count++;
            }
        }
        str++;
    }

    return count;
}

char **ft_split(char *str) {
    int word_count = count_words(str);
    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    
    if (!result) {
        return NULL;
    }

    int i = 0;
    while (*str) {
        while (is_separator(*str)) {
            *str = '\0';
            str++;
        }
        
        if (*str) {
            result[i++] = str;
            while (*str && !is_separator(*str)) {
                str++;
            }
        }
    }

    result[i] = NULL;
    return result;
}

int main() {
    char input[] = "Hello, World!\tThis is\na test.";
    char **words = ft_split(input);

    if (words) {
        for (int i = 0; words[i] != NULL; i++) {
            printf("%s\n", words[i]);
        }
        
        free(words);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
