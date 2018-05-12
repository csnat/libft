/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 17:02:07 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 16:57:32 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_space(const char c)
{
	if (c != '\0' && (c == ' ' || c == '\n' || c == '\t'))
		return (1);
	return (0);
}

char				*ft_strtrim(char const *s)
{
	size_t				len;
	size_t				begin;
	int					end;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	end = len - 1;
	begin = -1;
	while (ft_space(s[++begin]) && begin < len)
		;
	while (ft_space(s[end--]) && end > -1)
		;
	if (end == -1 || begin >= len)
		return (ft_strnew(1));
	else
	{
		len = ++end - begin + 1;
		return (ft_strsub(s, begin, len));
	}
}
