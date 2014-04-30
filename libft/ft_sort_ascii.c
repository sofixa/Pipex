/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_ascii.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 17:05:38 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/15 19:58:13 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_sort_ascii(int len, char **tab)
{
	int		cur;
	int		diff;
	char	*swap[1];

	cur = 0;
	diff = 1;
	if (tab == NULL || *tab == NULL)
		return (NULL);
	while (diff == 1)
	{
		cur = 0;
		diff = 0;
		while (cur < len - 1)
		{
			if (ft_strcmp(tab[cur], tab[cur + 1]) > 0)
			{
				*swap = tab[cur + 1];
				tab[cur + 1] = tab[cur];
				tab[cur] = *swap;
				diff = 1;
			}
			cur += 1;
		}
	}
	return (tab);
}
