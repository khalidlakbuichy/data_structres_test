/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dlistint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:53:15 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 14:58:49 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

size_t	print_dlistint(const dlistint_t *h)
{
	dlistint_t *head;
	size_t size;

	size = 0;
	head = h;
	while (head != NULL)
	{
		printf("%d", head->n);
		size++;
		head = head->next;
	}
	return (size);
}