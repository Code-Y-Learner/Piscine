/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 04:12:56 by seungjyu          #+#    #+#             */
/*   Updated: 2023/03/02 04:21:35 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	ft_atoi(char *str);
int	ft_nbr(char c, long n);

int	ft_nbr(char c, long n)
{
	c -= 48;
	n = 10 * n;
	n += c;
	return (n);
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	int				pm;
	long			nb;

	i = 0;
	pm = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pm *= -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = ft_nbr(str[i], nb);
		else
			return (pm * (int) nb);
		i++;
	}
	return (pm * (int) nb);
}
