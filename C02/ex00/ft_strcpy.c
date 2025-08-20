/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 10:08:46 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/13 08:47:38 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
// The  strcpy()  function  copies the string pointed to by src, including
// the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
// The  strings  may  not overlap, and the destination string dest must be
// large enough to receive the copy.