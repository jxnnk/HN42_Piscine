/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 09:00:20 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/11 14:08:21 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	cntr;

	cntr = 0;
	while (str[cntr] != '\0')
	{
		while (97 <= str[cntr] && str[cntr] <= 122)
		{
			str[cntr] = str[cntr] - 32;
		}
		cntr++;
	}
	return (str);
}
