/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchowdhu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:49:47 by pchowdhu          #+#    #+#             */
/*   Updated: 2023/08/20 22:21:46 by pchowdhu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "list.h"

// Comparison function for ascending order
int ascending(int a, int b) {
    return a <= b;
}

// Function to print the linked list
void print_list(t_list *lst) {
    while (lst != NULL) {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

int main() {
    // Create an example linked list
    t_list *head = NULL;
    for (int i = 0; i < 10; i++) {
        t_list *new_node = malloc(sizeof(t_list));
        new_node->data = rand() % 100; // Filling the data with random values
        new_node->next = head;
        head = new_node;
    }

    printf("Original list:\n");
    print_list(head);

    // Sort the linked list in ascending order
    t_list *sorted_list = sort_list(head, ascending);

    printf("Sorted list:\n");
    print_list(sorted_list);

    // Free memory
    while (sorted_list != NULL) {
        t_list *temp = sorted_list;
        sorted_list = sorted_list->next;
        free(temp);
    }

    return 0;
}
