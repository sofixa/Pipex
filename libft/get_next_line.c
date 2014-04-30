/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmesas <kmesas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/27 03:36:46 by kmesas            #+#    #+#             */
/*   Updated: 2014/03/27 03:36:49 by kmesas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function 'rotate' form n bytes to the left (discarding previous byte).
** Returns the new buffer useful size.
*/

static size_t	ft_rotate_buff(void *buffer, size_t buff_size, size_t n)
{
	size_t		i;

	i = 0;
	while (i < buff_size)
	{
		if (i + n < buff_size)
			((char *)buffer)[i] = ((char *)buffer)[i + n];
		else
			((char *)buffer)[i] = '\0';
		i++;
	}
	return (buff_size - n);
}

static int		ft_pop_line(char *buffer, char **line)
{
	char		*out_str;
	size_t		out_offset;
	size_t		buff_len;
	int			retval;

	retval = (ft_memchr(buffer, '\n', BUFF_SIZE + 1)) ? 1 : 0;
	if (ft_memchr(buffer, '\n', BUFF_SIZE))
		buff_len = (char *)ft_memchr(buffer, '\n', BUFF_SIZE + 1) - buffer + 1;
	else
		buff_len = (char *)ft_memchr(buffer, '\0', BUFF_SIZE + 1) - buffer + 1;
	out_offset = (*line) ? ft_strlen(*line) : 0;
	if ((out_str = ft_memalloc(out_offset + buff_len)))
	{
		if (*line)
		{
			ft_strcpy(out_str, *line);
			free(*line);
		}
		ft_memcpy(out_str + out_offset, buffer, buff_len - 1);
		*line = out_str;
		ft_rotate_buff(buffer, BUFF_SIZE + 1, buff_len);
		return (retval);
	}
	return (-1);
}

int				get_next_line(int const fd, char **line)
{
	static char	buffer[BUFF_SIZE + 1];
	int			retval;
	int			byte_read;

	if (BUFF_SIZE > 0 && line && (fd == 0 || fd > 2))
	{
		*line = NULL;
		if ((retval = ft_pop_line(buffer, line)) == 1 || retval == -1)
			return (retval);
		while ((byte_read = read(fd, buffer + ft_strlen(buffer),
	BUFF_SIZE - ft_strlen(buffer))) > 0)
		{
			if ((retval = ft_pop_line(buffer, line)) == 1 || retval == -1)
				return (retval);
		}
		if (byte_read == 0 && **line)
			return (1);
		ft_memset(buffer, 0, BUFF_SIZE);
		return (0);
	}
	return (-1);
}
