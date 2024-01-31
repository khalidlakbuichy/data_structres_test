/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khalid <khalid@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 09:59:31 by khalid            #+#    #+#             */
/*   Updated: 2024/01/31 11:19:54 by khalid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define F_STACK_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

typedef struct s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

typedef struct s_stack
{
	t_list			*top;
}					t_stack;

t_stack				*ft_stack_create(void);
void				ft_stack_push(t_stack *stack, void *data);
void				ft_stack_pop(t_stack *stack);
void				*ft_stack_top(t_stack *stack);
int					ft_stack_size(t_stack *stack);
int					ft_stack_is_empty(t_stack *stack);
void				ft_stack_clear(t_stack *stack);
void				ft_stack_destroy(t_stack *stack);

#endif