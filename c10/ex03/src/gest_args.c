/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gest_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zenkri <zenkri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2023/12/11 13:02:51 by zenkri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

void	print_file(int argc, char **argv, int octet)
{
	int		i;
	int		size;

	i = 2;
	while (++i < argc)
		if ((size = ft_file_count(argv[i])) == -1)
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": ", 2);
			ft_putstr(argv[i], 2);
			ft_putstr(": ", 2);
			ft_putstr(strerror(errno), 2);
			ft_putchar('\n', 2);
		}
		else
		{
			if (argc > 4)
			{
				if (i != 3)
					ft_putchar('\n', 1);
				ft_putstr_headfile(argv[i]);
			}
			ft_file_get(argv[i], size, octet);
		}
}

void	gest_args(int argc, char **argv)
{
	int			octet;
	extern int	errno;

	if (argc < 4)
		no_args();
	else if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		if ((octet = ft_atoi(argv[2])) != -1)
		{
			print_file(argc, argv, octet);
		}
		else
		{
			ft_putstr(basename(argv[0]), 2);
			ft_putstr(": illegal offset -- ", 2);
			ft_putstr(argv[2], 2);
			ft_putchar('\n', 2);
		}
	}
}
