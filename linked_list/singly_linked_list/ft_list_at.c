/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:21:46 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 11:25:32 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (begin_list == NULL)
		return (NULL);
	while (i <= index)
	{
		begin_list = begin_list->next;
		if (begin_list == NULL)
			return (NULL);
		i++;
	}
	return (begin_list);
}