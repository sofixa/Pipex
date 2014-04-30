/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 20:05:29 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:21:42 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(int n)
{
	int		count;
	long	nbr;

	nbr = (long)n;
	count = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr > 0)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

static void	ft_fill_str(char *str, long n)
{
	char	*tmp;

	tmp = ft_strnew(2);
	if (n < 0)
	{
		ft_strcat(str, "-");
		ft_fill_str(str++, -n);
	}
	else if (n < 10)
	{
		tmp[0] = n + 48;
		ft_strcat(str, tmp);
	}
	else
	{
		ft_fill_str(str++, n / 10);
		ft_fill_str(str++, n % 10);
	}
	ft_memdel((void **)&tmp);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = ft_count_size(n);
	str = ft_strnew(count + 1);
	ft_fill_str(str, (long)n);
	return (str);
}
