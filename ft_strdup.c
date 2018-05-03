/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:47:32 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/02 16:13:50 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup (const char *s)
{
	char *str;

	str = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_strcpy(str, s);
		return (str);
	}
}
