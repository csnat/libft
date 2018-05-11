/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:48:45 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/10 16:45:16 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t  i;
    size_t  length;

    i = 0;
    length = ft_strlen(src);
    while (*dst && size > 0)
    {
        dst++;
		i++;
        size--;
    }
    while (*src && size-- > 1)
        *dst++ = *src++;
    if (size == 1 || *src == 0)
        *dst = '\0';
    return (length + i);
}
