/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zenkri <zenkri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 16:51:51 by zenkri            #+#    #+#             */
/*   Updated: 2023/12/08 17:16:17 by zenkri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft.h"

char	*str_cpy(char *str, char *dest)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char		*dest;

	i = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * i);
	if (!(dest))
		return (NULL);
	return (str_cpy(src, dest));
}