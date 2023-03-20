/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:25:53 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 23:00:39 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (n == 0)
		return (1);
	else if (n < 0)
		return (0);
	while (nb > 1)
	{
		n *= (nb - 1);
		nb--;
	}
	return (n);
}
