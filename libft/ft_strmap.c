/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 01:06:48 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:26:31 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dest;
	int		len;

	dest = NULL;
	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		if (!(dest = (char *)malloc((len + 1) * sizeof(*s))))
			return (NULL);
		dest[len] = '\0';
		while (--len >= 0)
			dest[len] = f(s[len]);
	}
	return (dest);
}
