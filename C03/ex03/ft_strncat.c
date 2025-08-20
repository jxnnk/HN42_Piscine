/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:17:55 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/13 11:47:30 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((c < nb) && src[c] != '\0' )
	{
		dest[i] = src[c];
		i++;
		if (c != nb)
		{
			c++;
		}
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[100] = "Hasdu";
// 	char	src[10] = "Hallu";

// 	ft_strncat(dest, src, 2);
// 	printf ("%s\n", dest);
// }
