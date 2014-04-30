/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/09 22:51:26 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:27:37 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*get_begin(char *s, char c)
{
	while (*s != '\0' && *s == c)
		s++;
	return (s);
}

static char		*get_end(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	return (s);
}

static int		count_word(char *str, char c)
{
	char	*s;
	int		count;

	s = get_begin(str, c);
	count = 0;
	while (*s != '\0')
	{
		s = get_end(s, c);
		s = get_begin(s, c);
		count++;
	}
	return (count);
}

char			**ft_strsplit(char *str, char c)
{
	char	*s;
	char	*end;
	int		count;
	char	**tab;

	if (str == 0)
		return (0);
	count = count_word(str, c);
	tab = (char **)malloc((count + 1) * sizeof(char *));
	s = get_begin(str, c);
	count = 0;
	while (*s != '\0')
	{
		end = get_end(s, c);
		tab[count] = ft_strndup(s, end - s);
		s = end;
		s = get_begin(s, c);
		count++;
	}
	tab[count] = 0;
	return (tab);
}
