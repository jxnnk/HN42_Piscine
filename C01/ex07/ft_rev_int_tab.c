/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:45:32 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/10 16:46:35 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{	
	int	temp;
	int	cnt;

	cnt = 0;
	size = size - cnt;
	while (cnt < size)
	{
		temp = tab[cnt];
		tab[cnt] = tab[size - 1];
		tab[size - 1] = temp;
		cnt++;
		size--;
	}
}
// size -1 wegen Arrayelement 