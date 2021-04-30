/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 16:21:52 by azouzoul          #+#    #+#             */
/*   Updated: 2020/10/25 09:35:37 by azouzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y && x > 0)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 || i == 0 || j == x - 1 || i == y - 1)
				if ((j == 0 && i == 0) || (j == x - 1 && i == 0))
					ft_putchar('A');
				else if ((j == 0 && i == y - 1) || (j == x - 1 && i == y - 1))
					ft_putchar('C');
				else
					ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
