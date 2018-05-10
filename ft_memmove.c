/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:54:53 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/10 14:29:18 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*s1;

	s1 = ft_memalloc(n + 1);
	s1 = ft_memcpy(s1, src, n);
	dest = ft_memcpy(dest, s1, n);
	free(s1);
	return (dest);
}
