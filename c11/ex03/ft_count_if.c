/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <izenkri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 12:59:58 by zenkri            #+#    #+#             */
/*   Updated: 2023/12/20 17:36:26 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int		i;
	int		count;

	i = 0;
	count= 0;
	while (i < lenght){
		if ((*f)(tab[i]) != 0)
			count++;
        i++;
    }
	return (count);
}
