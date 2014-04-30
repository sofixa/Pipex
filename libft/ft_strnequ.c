/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:15:54 by kmesas            #+#    #+#             */
/*   Updated: 2014/02/02 17:41:29 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		while (s1[i] != '\0' && --n)
		{
			if (ft_isalpha(s1[i]) && ft_isalpha(s2[i]))
			{
				if (ft_tolower(s1[i]) != ft_tolower(s2[i]))
					return (0);
			}
			else if (s2[i] == '\0')
				return (0);
			++i;
		}
		if (s1[i] == s2[i])
			return (1);
	}
	return (0);
}
