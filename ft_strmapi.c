/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 16:50:44 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/10 22:31:39 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	size_t			size;
	char			*str;

	if (!s || !f)
		return (0);
	size = ft_strlen(s);
	str = ft_strnew(size);
	if (!str)
		return (0);
	i = -1;
	while (++i < size)
		str[i] = f(i, s[i]);
	return (str);
}
