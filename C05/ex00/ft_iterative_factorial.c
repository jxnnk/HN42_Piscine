/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:45:42 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/18 11:44:40 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{	
		factorial *= i;
		i++;
	}
	return (factorial);
	if (nb == 0)
	{
		return (1);
	}
}

// int main() {
//     int num;
//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     if (num < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//     } else {
//         int result = factorial_iterative(num);
//         printf("Factorial of %d is %d\n", num, result);
//     }
//     return 0;
// }