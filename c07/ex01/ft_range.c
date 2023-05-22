/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 21:12:41 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/28 09:21:00 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	long long	size;
	int			*arr;
	int			i;

	size = max - min;
	if (max <= min)
		return (0);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	i = 0;
	while (min + i < max)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
