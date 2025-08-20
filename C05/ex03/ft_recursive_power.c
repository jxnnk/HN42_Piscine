/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 11:44:00 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/18 13:26:25 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (1 < power)
	{
		result = (nb * ft_recursive_power(nb, power - 1));
	}
	return (result);
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 2;
// 	b = 5;
// 	ft_recursive_power(a, b);
// 	printf ("%i\n", ft_recursive_power(a, b));
// }
