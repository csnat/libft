/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 17:05:44 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 20:32:35 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int i;
	int n;

	i = 0;
	n = 0;
	if (!s || !c)
		return (0);
	while (*s)
	{
		if (*s == c && i == 1)
			i = 0;
		if (*s != c && i == 0)
		{
			i = 1;
			n++;
		}
		s++;
	}
	return (n);
}

static int	ft_wordlen(const char *s, char c)
{
	int len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		words;
	char	**array;

	i = 0;
	words = ft_wordcount((const char *)s, c);
	array = (char **)malloc(sizeof(*array) * (words + 1));
	if (array == NULL)
		return (NULL);
	while (words--)
	{
		while (*s == c && *s != '\0')
			s++;
		array[i] = ft_strsub((const char *)s, 0,
				ft_wordlen((const char *)s, c));
		s = s + ft_wordlen((const char*)s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
