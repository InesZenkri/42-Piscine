/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <ines@zenkri.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2024/01/07 13:50:44 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*last_elem;
	t_list	*new_elem;
	
	if (*begin_list)
	{
		last_elem = *begin_list;
		while (last_elem->next)
			last_elem = last_elem->next;
		new_elem = ft_create_elem(data);
		last_elem->next = new_elem;
	}
	else
		(*begin_list) = ft_create_elem(data);
}
