/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 11:19:06 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/12 15:58:42 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while ((src[counter] != '\0') && (counter < n))
	{
		dest[counter] = src[counter];
		counter++;
	}
	while (counter < n)
	{
		dest[counter] = '\0';
		counter++;
	}
	return (dest);
}

// The  strncpy()  function is similar, except that at most n bytes of src
// are copied.  Warning: If there is no null byte among the first n  bytes
// of src, the string placed in dest will not be null-terminated.   