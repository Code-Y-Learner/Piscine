/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:40:56 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/28 09:26:09 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int			*arr;
	long long	size;
	int			i;

	size = max - min;
	if (size <= 0)
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
