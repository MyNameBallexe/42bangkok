/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ballkung <ballkung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 01:59:52 by marvin            #+#    #+#             */
/*   Updated: 2026/05/09 06:58:28 by ballkung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_print_combo(int first, int second, int third)
{
	char	c;

	c = first + '0';
	write(1, &c, 1);
	c = second + '0';
	write(1, &c, 1);
	c = third + '0';
	write(1, &c, 1);
	if (!(first == 7 && second == 8 && third == 9))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = 0;
	while (first <= 7)
	{
		second = first + 1;
		while (second <= 8)
		{
			third = second + 1;
			while (third <= 9)
			{
				ft_print_combo(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
}
