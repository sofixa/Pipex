/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 10:40:27 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/27 03:21:42 by abarreya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	char	*src1;
	char	*src2;

	src1 = (char *)s1;
	src2 = (char *)s2;
	while (n--)
		*src1++ = *src2++;
	return (s1);
}
