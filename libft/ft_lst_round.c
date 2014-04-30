/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_round.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/06 12:20:02 by kmesas            #+#    #+#             */
/*   Updated: 2014/01/12 23:24:48 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_lstrnd	*lstrnd_init(void)
{
	t_lstrnd	*list;
	t_lstelem	*root;

	if ((list = malloc(sizeof(*list))) == NULL)
		return (NULL);
	if ((root = malloc(sizeof(*root))) != NULL)
	{
		list->root = root;
		root->prev = root;
		root->next = root;
		list->len = 0;
	}
	return (list);
}

void		lstrnd_free(t_lstrnd *list)
{
	t_lstelem	*it;
	t_lstelem	*next;

	it = list->root->next;
	while (it != list->root)
	{
		next = it->next;
		free(it);
		it = next;
	}
	free(it);
	list = lstrnd_init();
}

void		lstrnd_del(t_lstrnd **list)
{
	lstrnd_free(*list);
	free(*list);
	*list = NULL;
}

void		lstrnd_rmelm(t_lstrnd *list, t_lstelem *element)
{
	element->prev->next = element->next;
	element->next->prev = element->prev;
	free(element);
	list->len--;
}
