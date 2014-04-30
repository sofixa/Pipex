/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:59:45 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/21 16:30:08 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	len;

	if (s1 != NULL && s2 != NULL)
	{
		len = ft_strlen(s1) + ft_strlen(s2) + 1;
		if ((dest = ft_memalloc(len)))
		{
			dest = ft_strcat(dest, s1);
			dest = ft_strcat(dest, s2);
			return (dest);
		}
		return (NULL);
	}
	return (NULL);
}
