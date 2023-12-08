/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zenkri <zenkri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:51:20 by zenkri            #+#    #+#             */
/*   Updated: 2023/12/08 17:11:56 by zenkri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/ft.h"

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_swap_tail(char *str, int size)
{
	int		i;

	i = 0;
	while (++i < size)
		str[i - 1] = str[i];
}
