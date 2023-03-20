/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:52:06 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 23:01:57 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	long long	n;

	if (nb == 1)
		return (1);
	n = 2;
	while (n * n < nb)
		n++;
	if (n * n == nb)
		return (n);
	else
		return (0);
}
