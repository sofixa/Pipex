/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:18:40 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/28 19:09:00 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	k;
	size_t	j;
	size_t	l;
	size_t	i;

	k = 0;
	l = 0;
	j = 0;
	i = 0;
	while (src[k])
		k++;
	while (dst[j])
	{
		j++;
		l++;
	}
	while (src[i] && j + 1 < size)
		dst[j++] = src[i++];
	dst[j] = 0;
	if (size < l)
		return (size + k);
	return (l + k);
}
