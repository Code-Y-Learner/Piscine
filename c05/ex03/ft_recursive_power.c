/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:55:59 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 16:50:45 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power >= 1)
		return (nbr * ft_recursive_power(nbr, power - 1));
	else
		return (0);
}
