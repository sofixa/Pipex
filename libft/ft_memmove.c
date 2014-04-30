/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:08:06 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:25:27 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	char	*src;
	char	*dest;
	size_t	i;

	src = (char *)s2;
	dest = s1;
	if (dest > src)
	{
		i = n;
		while (i > 0)
		{
			dest[i - 1] = src[i - 1];
			i--;
		}
	}
	else if (dest < src)
		ft_memcpy(dest, src, n);
	return (s1);
}
