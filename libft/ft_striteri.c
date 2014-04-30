/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 00:55:26 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:06:45 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	len;

	if (s != NULL && f != NULL)
	{
		len = ft_strlen(s);
		while (--len >= 0)
			f(len, &s[len]);
	}
}
