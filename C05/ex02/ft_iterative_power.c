/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 09:59:05 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/18 11:44:34 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (1 < power)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 2;
// 	b = 5;
// 	ft_iterative_power(a, b);
// 	printf ("%i\n", ft_iterative_power(a, b));
// }
