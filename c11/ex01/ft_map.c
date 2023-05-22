/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:18:27 by seungjyu          #+#    #+#             */
/*   Updated: 2023/03/02 05:33:25 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	i = 0;
	while (tab[i])
		i++;
	arr = (int *)malloc(sizeof(int) * i);
	if (!arr)
		return (0);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
