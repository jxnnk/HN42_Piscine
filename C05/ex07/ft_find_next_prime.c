/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 09:29:52 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/19 11:56:13 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_prime(int num)
{
	int	i;

	i = 2;
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (1)
	{
		if (check_prime(nb))
			return (nb);
		nb++;
	}
}

#include <stdio.h>
int	main(void)
{
	printf ("%i\n", ft_find_next_prime(8));
}
