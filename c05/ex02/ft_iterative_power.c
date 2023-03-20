/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 16:45:54 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 16:50:09 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	nbr;

	nbr = nb;
	if (power == 0)
		return (1);
	if (nb == 0 || power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb *= nbr;
		power--;
	}
	return (nb);
}
