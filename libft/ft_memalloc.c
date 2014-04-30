/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 11:54:43 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:24:08 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*str;

	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	ft_memset(str, '\0', size);
	return (str);
}
