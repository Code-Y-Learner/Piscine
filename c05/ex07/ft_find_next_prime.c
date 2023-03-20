/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:08:30 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 17:07:56 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);
int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	long	i;
	long	nbr;

	nbr = nb;
	if (nbr == 0 || nbr == 1 || nbr < 0)
		return (0);
	i = 2;
	while (i * i < nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	tf;

	tf = 1;
	while (tf)
	{
		if (nb == 2147483647)
			return (nb);
		if (ft_is_prime(nb))
			return (nb);
		else
			nb++;
	}
	return (0);
}
