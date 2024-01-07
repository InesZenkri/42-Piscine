/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <ines@zenkri.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2024/01/07 13:56:30 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*elem;
	t_list	*elem2;
	int		i;

	if (size <= 0)
		return (0);
	elem = ft_create_elem(strs[0]);
	i = 0;
	while (++i < size)
	{
		elem2 = ft_create_elem(strs[i]);
		elem2->next = elem;
		elem = elem2;
	}
	return (elem);
}
