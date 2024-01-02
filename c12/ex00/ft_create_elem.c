/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <izenkri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2024/01/02 14:16:35 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"


t_list	*ft_create_elem(void *data)
{
	t_list	*created_list;
    
	created_list = malloc(sizeof(t_list));
	if (!created_list)
        return(NULL);
	created_list->data = data;
	created_list->next = NULL;
	return (created_list);
}

