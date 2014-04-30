/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:40:40 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:24:59 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*src1;
	char	*src2;
	size_t	i;

	i = 0;
	src1 = (char *)s1;
	src2 = (char *)s2;
	while (i < n)
	{
		if (src1[i] != src2[i])
			return ((unsigned char)src1[i] - (unsigned char)src2[i]);
		++i;
	}
	return (0);
}
