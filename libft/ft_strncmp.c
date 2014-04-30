/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 15:32:26 by kmesas            #+#    #+#             */
/*   Updated: 2014/02/06 16:37:17 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	count;

	count = 0;
	while (*(s1 + count) != 0 && n > 0)
	{
		if (*(s1 + count) > *(s2 + count))
			return (*(s1 + count) - *(s2 + count));
		else if (*(s1 + count) < *(s2 + count))
			return (*(s1 + count) - *(s2 + count));
		count++;
		n--;
	}
	if (ft_strlen(s1) > ft_strlen(s2) && n > 0)
		return (*(s1 + count));
	else if (ft_strlen(s1) < ft_strlen(s2) && n > 0)
		return (0 - *(s2 + count));
	else
		return (0);
}
