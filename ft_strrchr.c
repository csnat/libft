/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:49:29 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/10 17:50:28 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;
	int i = 0;
	int j = 0;
	str = a;
	while (str[i] != '\0')
	{
		if (str[i] == c )
		{
			j++;
		}
		i++;
	}
	while (j > 0)
	{
		str = ft_strchr(str, c) + 1;
		j--;
	}
	return (str - 1);
}
