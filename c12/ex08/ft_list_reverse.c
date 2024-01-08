/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <ines@zenkri.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2024/01/08 16:55:10 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push(t_list **begin_list, t_list *elem)
{
	if (begin_list)
		elem->next = *begin_list;
	*begin_list = elem;

}

void	ft_list_reverse(t_list **begin_with)
{
	t_list	*reverse;
	t_list	*list;
	t_list	*next;

	reverse = 0;
	list = *begin_with;
	while (list)
	{
		next = list->next;
		ft_list_push(&reverse, list);
		list = next;
	}
	*begin_with = reverse;
}
