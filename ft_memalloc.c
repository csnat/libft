/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 18:18:51 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/10 22:10:18 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *array;

	array = (void*)malloc(sizeof(void) * size);
	if (!array || size == 0)
		return (NULL);
	ft_bzero(array, size);
	return (arry);
}
