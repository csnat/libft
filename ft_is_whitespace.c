/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_whitespace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/11 19:05:37 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 20:36:13 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_is_whitespace(int c)
{
	if (c == ' ' || c == '\t' || c == '\v' || c == '\n' || c == '\r' ||
			c == '\n')
		return (1);
	else
		return (0);
}