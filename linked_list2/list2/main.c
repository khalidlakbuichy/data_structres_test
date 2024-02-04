/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 11:06:28 by khalid            #+#    #+#             */
/*   Updated: 2024/02/04 12:05:01 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_print(void *data)
{
	char	*str;

	str = (char *)data;
	printf("%s\n", str);
}

int	main(void)
{
	t_list *head;

	head = NULL;
	char **arr = malloc(sizeof(char *) * 4);
	arr[0] = strdup("12");
	arr[1] = strdup("34");
	arr[2] = strdup("56");
	arr[3] = strdup("67");
	ft_lstadd_front(&head, ft_lstnew(arr[0]));
	ft_lstadd_front(&head, ft_lstnew(arr[1]));
	ft_lstadd_front(&head, ft_lstnew(arr[2]));
	ft_lstadd_front(&head, ft_lstnew(arr[3]));
   
	// ft_lstadd_back(&head, ft_lstnew(arr[2]));
	// ft_lstadd_back(&head, ft_lstnew(arr[3]));
	puts("-------------------- before ---------------------------");
	printf("size: %d\n", ft_lstsize(head));
	ft_lstiter(head, ft_print);
	puts("-------------------- after ---------------------------");
    printf("bol: %d\n", ft_lstdel_back(&head, free));
    printf("bol: %d\n", ft_lstdel_back(&head, free));
    // printf("bol: %d\n", ft_lstdel_back(&head, free));
    // printf("bol: %d\n", ft_lstdel_back(&head, free));
    // printf("bol: %d\n", ft_lstdel_back(&head, free));
    // printf("bol: %d\n", ft_lstdel_back(&head, free));
    // printf("bol: %d\n", ft_lstdel_back(&head, free));
	printf("size: %d\n", ft_lstsize(head));
    printf("found ?: %p\n", ft_lstsearh_item(head, "67", strcmp));
	ft_lstiter(head, ft_print);
	// printf("bool: %d\n", ft_lstdel_front(&head, free));
	// printf("size: %d\n", ft_lstsize(head));
	free(arr);
	ft_lstclear(&head, free);
}