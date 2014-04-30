/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:53:51 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:24:28 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	char	*src1;
	size_t	i;

	src1 = (char *)s1;
	i = 0;
	while (i < n)
	{
		src1[i] = ((char*)s2)[i];
		if (src1[i] == c)
			return (&src1[i + 1]);
		++i;
	}
	return (NULL);
}
