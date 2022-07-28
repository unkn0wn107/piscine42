/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocated.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:14:32 by agaley            #+#    #+#             */
/*   Updated: 2022/07/26 02:08:33 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALLOCATED_H
# define ALLOCATED_H

typedef struct s_allocated
{
	void				*addr;
	struct s_allocated	*next;
}t_allocated;

typedef struct s_alloc_stack
{
	t_allocated	*head;
}t_alloc_stack;

t_alloc_stack	*init_alloc_stack(void);
void			stack(t_alloc_stack *alloc_stack, void *new_addr);
void			pop(t_alloc_stack *alloc_stack);
void			kill_stack(t_alloc_stack *alloc_stack);
void			free_allocated(t_alloc_stack *alloc_stack);
void			*malloc_n_collect(t_alloc_stack *alloc_stack, size_t size);

#endif