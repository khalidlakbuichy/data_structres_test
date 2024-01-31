/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:53:15 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 13:03:57 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list *pre;
    t_list *head;

    head = *begin_list;
    pre = head;
    while (head != NULL)
    {
        if (cmp(head->data, data_ref) == 0)
        {
            pre->next = head->next;
            free_fct(head->data);
            head->data = NULL;
            free(head);
            head = pre->next;
        }
        else
        {
            pre = head;
            head = head->next;
        }
    }
    
}