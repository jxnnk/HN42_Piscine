/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeichhor <jeichhor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 10:17:12 by jeichhor          #+#    #+#             */
/*   Updated: 2025/08/19 12:52:14 by jeichhor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	a;

	i = 0;
	a = 0;
	if (argc == 1)
	{
		while (argv[a][i])
		{
			write(1, &argv[a][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}
