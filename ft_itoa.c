/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 16:40:01 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 16:49:52 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_size(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*str;
	size_t			size;
	unsigned int	a;

	size = str_size(n);
	a = n;
	if (n < 0)
	{
		a = -n;
		size++;
	}
	if (!(str = ft_strnew(size)))
		return (NULL);
	str[--size] = a % 10 + '0';
	while (a /= 10)
		str[--size] = a % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
