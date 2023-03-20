/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:13:03 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/13 18:06:49 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char arr[], int n)
{
	if (arr[0] != (58 - n))
	{
		write(1, arr, n + 2);
	}
	else
	{
		write(1, arr, n);
	}
}

void	resort(char arr[], int n, int index)
{
	while (index < n - 1)
	{
		arr[index + 1] = arr[index] + 1;
		index++;
	}
}

void	init(int n, char arr[])
{
	arr[n] = ',';
	arr[n + 1] = ' ';
	arr[0] = '0';
	resort(arr, n, 0);
}

void	ft_print_combn(int n)
{
	int		i;
	char	arr[13];

	init(n, arr);
	print(arr, n);
	while (arr[0] < (58 - n))
	{
		i = 0;
		while (i <= n - 1)
		{
			if (arr[i] == 58 - n + i)
			{
				arr[i - 1]++;
				resort(arr, n, i - 1);
				break ;
			}
			i++;
		}
		if (i == n)
		{
			arr[n - 1]++;
		}
		print(arr, n);
	}
}
