/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:49:29 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 20:33:57 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;

	length = (int)ft_strlen(s);
	while (length >= 0)
	{
		if (s[length] == (char)c)
			return (&(((char *)s)[length]));
		length--;
	}
	return (NULL);
}
