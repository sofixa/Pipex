/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrnd_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/12 23:22:54 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:23:33 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		lstrnd_addprev(t_lstrnd *list, t_lstelem *element, char *str)
{
	t_lstelem	*new_elem;

	if ((new_elem = malloc(sizeof(*new_elem))) != NULL)
	{
		new_elem->str = str;
		new_elem->prev = element->prev;
		new_elem->next = element;
		element->prev->next = new_elem;
		element->prev = new_elem;
		list->len++;
	}
}

void		lstrnd_addnext(t_lstrnd *list, t_lstelem *element, char *str)
{
	t_lstelem	*new_elem;

	if ((new_elem = malloc(sizeof(*new_elem))) != NULL)
	{
		new_elem->str = str;
		new_elem->prev = element;
		new_elem->next = element->next;
		element->next->prev = new_elem;
		element->next = new_elem;
		list->len++;
	}
}
