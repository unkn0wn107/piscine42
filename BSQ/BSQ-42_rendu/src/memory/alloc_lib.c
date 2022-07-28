/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alloc_lib.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchenava <mchenava@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 22:01:57 by agaley            #+#    #+#             */
/*   Updated: 2022/07/26 04:36:15 by mchenava         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes.h"

/**
 * Frees all ements of the memory allocation stack
 * @param alloc_stack pointer towards stack anchor
 */
void	free_allocated(t_alloc_stack *alloc_stack)
{
	while (alloc_stack && alloc_stack->head)
		pop(alloc_stack);
}

/**
 * Malloc and adds element to a memory allocation stack
 * @param alloc_stack pointer towards stack anchor
 * @param size size_t to be allocated by malloc
 */
void	*malloc_n_collect(t_alloc_stack *alloc_stack, size_t size)
{
	void	*addr;

	addr = malloc(size);
	if (!addr)
	{
		ft_put_error(ALLOC_FAIL);
		exit(EXIT_FAILURE);
	}
	stack(alloc_stack, addr);
	return (addr);
}
