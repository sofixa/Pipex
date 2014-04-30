/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpopone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 18:21:25 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/28 18:28:38 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstpopone(t_list **lst, void (*del)(void *, size_t))
{
	t_list	*prev;
	t_list	*next;

	prev = (*lst)->prev;
	next = (*lst)->next;
	if (prev || !del)
	{
		prev->next = next;
		ft_lstdelone(lst, del);
	}
	else
	{
		ft_lstdelone(lst, del);
		*lst = next;
		(*lst)->prev = NULL;
	}
}
