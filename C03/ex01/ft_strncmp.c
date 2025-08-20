/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 09:02:05 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/13 08:17:58 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	ft_strncmp(char *dest, char *src, unsigned int n)
{
	unsigned int	cntr;

	cntr = 0;
	while (((src[cntr] != '\0') || (dest[cntr] != '\0')) && cntr < n)
	{
		if (src[cntr] != dest[cntr])
		{
			return (dest[cntr] - src[cntr]);
		}
		cntr++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	output;

// 	output = ft_strncmp("Hl", "Hallu", 2);
// 	printf ("%d\n", output);
// }
