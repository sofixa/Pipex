/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pipex.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atodorov <atodorov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/31 16:14:13 by atodorov          #+#    #+#             */
/*   Updated: 2013/12/31 20:08:23 by atodorov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PIPEX_H
# define FT_PIPEX_H

extern char	**environ;

void	ft_pipex(char *input, char *cmd1, char *cmd2, char *output);
void	ft_error_handling(char *str);
void	ft_pid1(int fd1, int *piped, char *cmd1);
void	ft_pid2(int fd2, int *piped, char *cmd2);
void	ft_exec(char **argv);

#endif /* !FT_PIPEX_H */
