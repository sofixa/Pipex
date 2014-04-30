/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:57:41 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:27:19 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;
	int		len;

	temp = (char *)s;
	len = ft_strlen(temp);
	while (len >= 0)
	{
		if (temp[len] == c)
			return (&temp[len]);
		--len;
	}
	return (NULL);
}
