/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zenkri <zenkri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2023/12/11 13:00:12 by zenkri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define __BUFF 30000

# include <fcntl.h>
# include <unistd.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

void	ft_putchar(char c, int out);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str, int out);
void	ft_putstr_buf(char *str, int size);
void	ft_putstr_headfile(char *filename);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_file_count(char *filepath);
void	ft_file_get(char *filepath, int sizetot, int size);
void	no_args();
void	gest_args(int argc, char **argv);
int		ft_atoi(char *str);

#endif
