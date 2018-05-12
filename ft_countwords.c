/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 18:39:16 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 18:42:10 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char *str, char x)
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (str[i] && str[i] == x)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != x)
			i++;
		res++;
		while (str[i] && str[i] == x)
			i++;
	}
	return (res);
}
