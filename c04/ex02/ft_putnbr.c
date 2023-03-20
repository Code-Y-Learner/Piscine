/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 05:11:49 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/18 21:26:34 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(long nb);
void	ft_putnbr(int nb);

void	ft_putchar(long i)
{
	i += 48;
	write(1, &i, 1);
}

void	ft_putnbr(int nb)
{
	long	num;

	num = nb;
	if (num < 0)
	{
		write(1, "-", 1);
		num *= -1;
	}
	if (num <= 9)
		ft_putchar(num);
	else
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
}
