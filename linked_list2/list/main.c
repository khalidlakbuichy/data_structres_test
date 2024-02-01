/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:37:48 by khalid            #+#    #+#             */
/*   Updated: 2024/02/01 11:47:34 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

int	main(int ac, char **av)
{
	t_list *head;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew(NULL));

	printf("size: %ld\n", ft_lstsize(head));
}