/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 18:20:02 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/28 18:27:42 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*next;
	t_list	*link;

	if (!alst || !(*alst) || del != NULL)
		return ;
	link = *alst;
	next = link;
	while (next)
	{
		link = next;
		next = link->next;
		ft_lstdelone(&link, del);
	}
	*alst = NULL;
}
