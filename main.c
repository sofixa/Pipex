/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 17:08:22 by atodorov          #+#    #+#             */
/*   Updated: 2014/04/30 16:56:13 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "ft_pipex.h"

int	main(int argc, char **argv)
{
	if (argc != 5)
		ft_error_handling("Usage: ./pipex file1 cmd1 cmd2 file2\n");
	else
		ft_pipex(argv[1], argv[2], argv[3], argv[4]);
	return (0);
}
