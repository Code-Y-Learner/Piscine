/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 23:14:12 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/12 21:13:13 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reset(int arr[], int a, int b)
{
	arr[0] = a / 10 + 48;
	arr[1] = a % 10 + 48;
	arr[2] = b / 10 + 48;
	arr[3] = b % 10 + 48;
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	arr[5];

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			reset(arr, a, b);
			write(1, &arr[0], 1);
			write(1, &arr[1], 1);
			write(1, " ", 1);
			write(1, &arr[2], 1);
			write(1, &arr[3], 1);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
