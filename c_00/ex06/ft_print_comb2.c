/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ballkung <ballkung@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 01:59:52 by marvin            #+#    #+#             */
/*   Updated: 2026/05/09 06:58:28 by ballkung         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_put_pair(int n)
{
	char	c;

	c = (n / 10) + '0';
	write(1, &c, 1);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

static void	ft_print_combo2(int first, int last)
{
	ft_put_pair(first);
	write(1, " ", 1);
	ft_put_pair(last);
	if (!(first == 98 && last == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	first;
	int	last;

	first = 0;
	while (first <= 98)
	{
		last = first + 1;
		while (last <= 99)
		{
			ft_print_combo2(first, last);
			last++;
		}
		first++;
	}
}
