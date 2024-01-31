/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlistint_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:58:25 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 10:35:37 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

size_t	dlistint_len(const dlistint_t *h)
{
	dlistint_t *head;
	size_t size;

	size = 0;
	head = h;
	while (head != NULL)
	{
		head = head->next;
		size++;
	}
	return (size);
}