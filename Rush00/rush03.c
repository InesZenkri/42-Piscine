/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: izenkri <izenkri@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:30:11 by izenkri           #+#    #+#             */
/*   Updated: 2023/12/11 13:30:49 by izenkri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putline(int x, int a, int b, int c)
{
	int i;

	i = 0;
	if (x >= 1)
		ft_putchar(a);
	while (i <= (x - 3))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	if (y >= 1 && x >= 1)
		ft_putline(x, 'A', 'B', 'C');
	while (i < y - 2 && x >= 1)
	{
		ft_putline(x, 'B', ' ', 'B');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		ft_putline(x, 'A', 'B', 'C');
	}
}
