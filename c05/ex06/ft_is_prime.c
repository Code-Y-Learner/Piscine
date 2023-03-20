/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:58:45 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 23:02:58 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	long long	i;
	long long	nbr;

	nbr = nb;
	if (nbr <= 1)
		return (0);
	i = 2;
	while (i * i <= nbr)
	{
		if (nbr % i == 0)
			return (0);
		i++;
	}
	return (1);
}
