/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:42:23 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/13 08:15:30 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	cntr;
	int	rest;

	cntr = 0;
	while ((s1[cntr] != '\0') || (s2[cntr] != '\0'))
	{
		if (s1[cntr] != s2[cntr])
		{
			rest = (s1[cntr] - s2[cntr]);
			return (rest);
		}
		cntr++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	output;

// 	output = ft_strcmp("Hallo", "Hallu");
// 	printf ("%d\n", output);
// }

//strcmp returns an integer indicating the result of the comparison, as follows

//        • 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.