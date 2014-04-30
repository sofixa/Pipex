/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 18:20:14 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/28 18:27:56 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*link;

	if (!alst || !(*alst) || !del)
		return ;
	link = *alst;
	del(link->content, link->content_size);
	free(link);
	*alst = NULL;
}
