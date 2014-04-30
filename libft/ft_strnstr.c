/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:55:26 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/28 19:09:37 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (!s1[i] || i == n)
			return (NULL);
		if (s1[i] == s2[j])
			j++;
		else
		{
			j = 0;
			while (s1[i] == s2[j])
				j++;
		}
		i++;
	}
	return ((char *)(s1 + i - j));
}
