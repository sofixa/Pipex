/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_row.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 23:01:13 by kmesas            #+#    #+#             */
/*   Updated: 2013/12/15 23:23:58 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_row	*row_init(void)
{
	t_row	*row;

	row = malloc(sizeof(*row));
	row->first = NULL;
	return (row);
}

void	row_thread(t_row *row, char *new_elm)
{
	t_element	*temp;
	t_element	*current;

	if (!(temp = malloc(sizeof(*temp))) || new_elm == NULL)
		exit(EXIT_FAILURE);
	temp->element = new_elm;
	temp->next = NULL;
	if (row->first != NULL)
	{
		current = row->first;
		while (current->next != NULL)
			current = current->next;
		current->next = temp;
	}
	else
		row->first = temp;
}

char	*row_process(t_row *row)
{
	char		*row_elm;
	t_element	*first_elm;

	row_elm = NULL;
	if (row == NULL)
		exit(EXIT_FAILURE);
	if (row->first != NULL)
	{
		first_elm = row->first;
		row_elm = first_elm->element;
		row->first = first_elm->next;
		free(first_elm);
	}
	return (row_elm);
}
