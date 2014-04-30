/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:04:01 by kmesas            #+#    #+#             */
/*   Updated: 2014/01/22 05:19:33 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *s1, const char *s2)
{
	char	*dest;
	char	*src;

	dest = s1;
	src = (char *)s2;
	while ((*dest = *src))
	{
		src++;
		dest++;
	}
	return (s1);
}
