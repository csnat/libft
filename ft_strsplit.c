/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 17:05:44 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 18:51:36 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(const char *s, char c)
{
	int flag;
	int word;

	flag = 0;
	word = 0;
	if (!s || !c)
		return (0);
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		if (*s != c && flag == 0)
		{
			flag = 1;
			word++;
		}
		s++;
	}
	return (word);
}

static int	ft_wlen(const char *s, char c)
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
	int		nb_words;
	char	**array;

	i = 0;
	nb_words = ft_word_count((const char *)s, c);
	array = (char **)malloc(sizeof(*array) * (nb_words + 1));
	if (array == NULL)
		return (NULL);
	while (nb_words--)
	{
		while (*s == c && *s != '\0')
			s++;
		array[i] = ft_strsub((const char *)s, 0, ft_wlen((const char *)s, c));
		s = s + ft_wlen((const char*)s, c);
		i++;
	}
	array[i] = NULL;
	return (array);
}
