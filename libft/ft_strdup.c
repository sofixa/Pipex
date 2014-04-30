/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:02:33 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:25:59 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*dest;

	len = ft_strlen(s1) + 1;
	if (!(dest = (char *)malloc(len * sizeof(char))))
		return (NULL);
	ft_memcpy(dest, s1, len);
	return (dest);
}
