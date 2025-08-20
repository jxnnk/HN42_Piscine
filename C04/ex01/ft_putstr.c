/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:11:20 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/14 10:52:44 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	s;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		s = str[i];
		write(1, &s, 1);
		i++;
	}
	return ;
}

// int main(void)
// {
// 	char *str;	
// 	str ="hellasdgagao";
// 	ft_putstr(str);
// }
