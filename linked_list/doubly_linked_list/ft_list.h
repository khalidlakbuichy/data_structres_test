/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:51:50 by khalid            #+#    #+#             */
/*   Updated: 2024/01/30 11:15:05 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define F_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_dlist
{
	int					n;
	struct dlistint_s	*prev;
	struct dlistint_s	*next;
}						dlistint_t;

size_t					print_dlistint(const dlistint_t *h);
size_t					dlistint_len(const dlistint_t *h);
dlistint_t				*add_dnodeint(dlistint_t **head, const int n);
dlistint_t				*add_dnodeint_end(dlistint_t **head, const int n);
void					free_dlistint(dlistint_t *head);
dlistint_t				*get_dnodeint_at_index(dlistint_t *head, unsigned int index);
dlistint_t	*get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int	delete_dnodeint_at_index(dlistint_t **h, unsigned int index);


#endif