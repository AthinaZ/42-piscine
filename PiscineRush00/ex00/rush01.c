/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azouzoul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 09:55:58 by azouzoul          #+#    #+#             */
/*   Updated: 2020/10/25 09:35:03 by azouzoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int j;

	i = 0;
	while (i < y && x > 0)
	{
		j = 0;
		while (j < x)
		{
			if (j == 0 || i == 0 || j == x - 1 || i == y - 1)
				if (j == 0 && i == 0)
					ft_putchar('/');
				else if ((j == 0 && i == y - 1) || (j == x - 1 && i == 0))
					ft_putchar('\\');
				else if (j == x - 1 && i == y - 1)
					ft_putchar('/');
				else
					ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
