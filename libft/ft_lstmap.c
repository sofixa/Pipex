/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 18:20:58 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:23:06 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	delfree(void *ptr, size_t size)
{
	free(ptr);
	(void)size;
}

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*start;
	t_list	*cur;
	t_list	*applied;

	if (!lst || f == NULL)
		return (NULL);
	start = NULL;
	while (lst)
	{
		if (!(cur = f(lst)))
		{
			ft_lstdel(&start, &delfree);
			return (NULL);
		}
		applied = ft_lstnew(cur->content, cur->content_size);
		ft_lstaddbot(&start, applied);
		lst = lst->next;
	}
	return (start);
}
