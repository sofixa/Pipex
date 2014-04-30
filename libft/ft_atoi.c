/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/26 01:11:08 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/27 03:37:18 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_is_space(const char *str)
{
	size_t	i;

	i = 0;
	while ((str[i] < 14 && str[i] > 8) || str[i] == 32)
		i++;
	return (i);
}

int				ft_atoi(const char *str)
{
	size_t	i;
	int		sign;
	int		result;

	result = 0;
	sign = 0;
	i = ft_is_space(str);
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (str[i] < 48 || str[i] > 57)
		return (0);
	while (str[i] > 47 && str[i] < 58)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	if (sign)
		result = result * (-1);
	return (result);
}
