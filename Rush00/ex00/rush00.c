/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 11:40:52 by abitkina          #+#    #+#             */
/*   Updated: 2025/08/03 16:10:15 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putchar (char *c);

void	rush (int x, int y)
{
	if (x < 0 || y < 0) return;
	int	h = 0;
	while (h < y)
	{
		int w = 0;
		while (w < x)
		{
			if ((w == x-1 && h == y-1) || (w == x-1 && h == 0) || (w == 0 && h == 0) || (w == 0 && h == y-1))
			{
				ft_putchar("o");
			}
			else if (h == 0 || h == y-1)
			{
				ft_putchar ("-");
			}
			else if (w == 0 || w == x-1)
			{
				ft_putchar ("|");
			}
			else
			{
				ft_putchar (" ");
				}
			w++;
		}
		h++;
		ft_putchar ("\n");
	}
}
