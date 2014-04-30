/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:54:41 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:26:17 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	char	*src1;
	char	*src2;
	int		i;

	i = 0;
	if (s1 != NULL && s2 != NULL)
	{
		src1 = (char *)s1;
		src2 = (char *)s2;
		while (src1[i] != '\0')
		{
			if (ft_isalpha(src1[i]) && ft_isalpha(src2[i]))
			{
				if (ft_tolower(src1[i]) != ft_tolower(src2[i]))
					return (0);
			}
			else if (src2[i] == '\0')
				return (0);
			++i;
		}
		if (src1[i] == '\0' && src2[i] == '\0')
			return (1);
	}
	return (0);
}
