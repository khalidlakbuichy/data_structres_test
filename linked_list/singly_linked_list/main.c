/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:06:59 by khalid            #+#    #+#             */
/*   Updated: 2024/01/29 12:23:50 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	main(void)
{
	t_list *head = NULL;
	const char *s1 = "Hello";
	const char *s2 = "Hi!";
	ft_list_push_back(&head, strdup(s1));
	ft_list_push_back(&head, strdup(s2));
    printf("size: %d\n", ft_list_size(head));
}