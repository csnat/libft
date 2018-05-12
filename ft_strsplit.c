/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncosta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 17:05:44 by ncosta            #+#    #+#             */
/*   Updated: 2018/05/11 17:14:17 by ncosta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_stop(const char *str, int start, char a)
{
	size_t		i;
	
	i = 0;
	if (!str)
		return (0);
	while (str[start] && (str[start] != a))
	{
		start++;
		i++;
	}
	return (i);
}

static int			ft_counter(char *str, char c)
{
	int		word;
	int		i;

	word = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		while (str[i] && str[i] == c)
			i++;
		word++;
	}
	return (word);
}

char				**ft_strsplit(char const *s, char c)
{
	int				word;
	int				j;
	unsigned int	i;
	char			**array;
	char			*str;

	str = (char *)s;
	if (!str || *str == 0)
		return (NULL);
	i = 0;
	word = ft_counter(str, c);
	array = (char**)ft_memalloc(sizeof(char*) * (word + 1));
	i = 0;
	j = 0;
	while (j < word)
	{
		while ((str[i] == (char)c) && str[i])
			i++;
		array[j] = ft_strsub(str, i, ft_stop(str, i, c));
		while ((str[i] != (char)c) && str[i])
			i++;
		j++;
	}
	array[j] = 0;
	return (array);
}
