/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klakbuic <klakbuic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 15:56:01 by klakbuic          #+#    #+#             */
/*   Updated: 2024/02/02 16:00:47 by klakbuic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstdel_back(t_list **lst, void (*del)(void *))
{
	if (del == NULL || (*lst) == NULL || lst == NULL)
		return ;
    
    
}