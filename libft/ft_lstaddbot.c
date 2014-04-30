/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddbot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 18:19:38 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/28 18:27:22 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstaddbot(t_list **alst, t_list *new)
{
	t_list	*cur;

	if (!alst || !new)
		return ;
	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	cur = *alst;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
	new->next = NULL;
	new->prev = cur;
}
