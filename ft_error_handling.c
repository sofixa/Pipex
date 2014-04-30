/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_handling.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 16:13:30 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/31 16:37:31 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pipex.h"
#include "libft/libft.h"

void	ft_error_handling(char *str)
{
	ft_putstr_fd(str, 2);
	_exit(1);
}
