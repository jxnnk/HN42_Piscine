/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 17:09:02 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/11 14:21:20 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	cntr;

	cntr = 0;
	while (str[cntr] != '\0')
	{
		while (65 <= str[cntr] && str[cntr] <= 90)
		{
			str[cntr] = str[cntr] + 32;
		}
		cntr ++;
	}
	return (str);
}
