/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:21:35 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/21 16:33:42 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (s != NULL)
	{
		if ((dest = (ft_memalloc(len))))
		{
			while (i < len && s[start] != '\0')
				dest[i++] = s[start++];
			return (dest);
		}
		return (NULL);
	}
	return (NULL);
}
