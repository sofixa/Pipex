/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:27:13 by kmesas            #+#    #+#             */
/*   Updated: 2013/11/25 14:16:37 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s1);
	while (i < n && s2[i] != '\0')
	{
		s1[len + i] = s2[i];
		++i;
	}
	s1[len + i] = '\0';
	return (s1);
}
