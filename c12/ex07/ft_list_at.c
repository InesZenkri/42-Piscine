 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_list.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <izenkri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2024/01/02 14:14:30 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	cur_elem;
	cur_elem = 0;
	while (begin_list)
	{
		if (cur_elem == nbr)
			return (begin_list);
		begin_list = begin_list->next;
		cur_elem++;
	}
	return (0);
}
