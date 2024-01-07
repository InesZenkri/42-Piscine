/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <ines@zenkri.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2024/01/07 13:59:41 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_clear(t_list *begin_with, void (*free_fct)(void *))
{
    t_list *cur_elem;

    if (begin_with)
        while (begin_with)
        {
            (*free_fct)(begin_with->data);
            cur_elem = begin_with->next;
            free(begin_with);
            begin_with = cur_elem;
        }
}
