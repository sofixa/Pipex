/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/28 18:21:13 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/26 01:22:38 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*dup_content(const void *content, size_t content_size)
{
	char	*alloc_content;
	char	*origin_content;
	size_t	i;

	if (!(alloc_content = malloc(content_size)))
		return (NULL);
	origin_content = (char*)content;
	i = 0;
	while (i < content_size)
	{
		*(alloc_content + i) = *(origin_content + i);
		++i;
	}
	return (alloc_content);
}

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;
	char	*alloc_content;

	if (!(res = malloc(sizeof(*res))))
		return (NULL);
	res->content = (void *)content;
	if (!content)
	{
		res->prev = NULL;
		res->content = NULL;
		res->content_size = 0;
	}
	else
	{
		if (!(alloc_content = dup_content(content, content_size)))
		{
			free(res);
			return (NULL);
		}
		res->prev = NULL;
		res->content = alloc_content;
		res->content_size = content_size;
	}
	res->next = NULL;
	return (res);
}
