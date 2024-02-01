/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:18:28 by klakbuic          #+#    #+#             */
/*   Updated: 2024/02/01 11:31:36 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LST_H
# define FT_LST_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstdel_front(t_list **lst, void (*del)(void *));
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				*ft_lst_searh_item(t_list *lst, void *ref, int (*cmp)());

#endif