/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 18:58:09 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/31 19:47:37 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"
#include "libft/libft.h"

char	*ft_conc(char *str, char *filename)
{
	char	*buf;

	buf = (char *)malloc(ft_strlen(str) + ft_strlen(filename) + 16);
	ft_strcat(buf, str);
	ft_strcat(buf, "/");
	ft_strcat(buf, filename);
	return (buf);
}

char	**ft_get_path(void)
{
	int			i;
	char		*p;
	char		**str;

	i = 0;
	str = NULL;
	while (environ[i] != '\0')
	{
		if ((ft_strnequ(environ[i], "PATH", 4)) == 1)
		{
			p = environ[i];
			p += 5;
			str = ft_strsplit(p, ':');
			i = -34;
			break ;
		}
		else
			i++;
	}
	return (str);
}

void	ft_exec(char **argv)
{
	char	**path;
	char	*buf;
	int		i;

	i = 0;
	path = ft_get_path();
	while (path[i] != '\0')
	{
		buf = ft_conc(path[i], argv[0]);
		if (execve(buf, argv, environ) != -1)
		{
			i = -34;
			break ;
		}
		else
			i++;
	}
	if (i >= 0)
		ft_error_handling("Could not find command\n");
}
