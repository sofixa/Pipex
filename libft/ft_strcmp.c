/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:51:44 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:25:50 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const void *s1, const void *s2)
{
	char	*src1;
	char	*src2;
	size_t	i;

	i = 0;
	src1 = (char *)s1;
	src2 = (char *)s2;
	while (src1[i] == src2[i])
	{
		if (src1[i] == '\0')
			return (0);
		++i;
	}
	return (src1[i] - src2[i]);
}
