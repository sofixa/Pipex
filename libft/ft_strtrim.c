/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 17:49:30 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:27:50 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*dest;
	size_t	start;
	size_t	len;
	int		i;

	i = 0;
	start = 0;
	len = ft_strlen(s) - 1;
	if (s != NULL && (dest = (char *)ft_memalloc((len + 2))) != NULL)
	{
		while (s[start] == '\t' || s[start] == '\n' || s[start] == ' ')
			start++;
		while ((s[len] == '\t' || s[len] == '\n' || s[len] == ' ') &&
				len >= start)
			--len;
		while (start <= len)
			dest[i++] = s[start++];
		dest[i] = '\0';
		return (dest);
	}
	return (NULL);
}
