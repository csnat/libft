/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:54:53 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/10 18:02:58 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	void	*s1;

	s1 = ft_memalloc(len + 1);
	s1 = ft_memcpy(s1, src, len);
	dest = ft_memcpy(dest, s1, len);
	free(s1);
	return (dest);
}
