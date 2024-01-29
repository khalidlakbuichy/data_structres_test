/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:03:08 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 12:27:30 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list *head;
	int i;

	i = 0;
	head = ft_create_elem(strs[i++]);
	if (head == NULL)
		return (NULL);
	while (i < size)
	{
		if (ft_list_push_back(&head, strs[i]) == NULL)
			return (NULL);
		i++;
	}
	return (head);
}