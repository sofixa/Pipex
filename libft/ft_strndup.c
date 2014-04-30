/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/21 19:06:17 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:26:56 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dest;

	if (!(dest = (char *)malloc((n + 1) * sizeof(char))))
		return (NULL);
	dest = ft_strncpy(dest, s1, n);
	dest[n] = '\0';
	return (dest);
}
