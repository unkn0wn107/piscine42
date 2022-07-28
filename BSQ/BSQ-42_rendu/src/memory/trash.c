/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trash.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaley <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:10:49 by agaley            #+#    #+#             */
/*   Updated: 2022/07/26 02:51:25 by agaley           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * Initialize memory allocation stack anchor
 * @return t_alloc_stack* or NULL if malloc fails
 */
t_alloc_stack	*init_alloc_stack(void)
{
	t_alloc_stack	*alloc_stack;

	alloc_stack = malloc(sizeof(*alloc_stack));
	if (!alloc_stack)
		return (NULL);
	alloc_stack->head = NULL;
	return (alloc_stack);
}

/**
 * Adds an element to a memory allocation stack
 * @param alloc_stack pointer towards stack anchor
 * @param new_addr the address of the allocated item
 */
void	stack(t_alloc_stack *alloc_stack, void *new_addr)
{
	t_allocated	*new;

	new = (t_allocated *)malloc(sizeof(*new));
	if (alloc_stack == NULL || new == NULL)
	{
		ft_put_error("Stacking_error");
		return ;
	}
	new->addr = new_addr;
	new->next = alloc_stack->head;
	alloc_stack->head = new;
}

/**
 * Removes last element from a memory allocation stack
 * @param alloc_stack pointer towards stack anchor
 */
void	pop(t_alloc_stack *alloc_stack)
{
	t_allocated	*popped;
	void		*address_to_pop;

	if (alloc_stack == NULL)
	{
		ft_put_error("Popping_error");
		return ;
	}
	else if (alloc_stack->head)
	{
		popped = NULL;
		popped = alloc_stack->head;
		address_to_pop = popped->addr;
		if (address_to_pop != NULL)
			free(address_to_pop);
		alloc_stack->head = popped->next;
		free(popped);
	}
}

/**
 * Frees a memory allocation stack
 * @param alloc_stack pointer towards stack anchor
 */
void	kill_stack(t_alloc_stack *alloc_stack)
{
	free(alloc_stack);
}
