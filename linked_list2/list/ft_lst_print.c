/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:34:28 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:36:57 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lst_print(t_list *lst, void (*ft_print)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		ft_print(lst->content);
		lst = lst->next;
	}
}