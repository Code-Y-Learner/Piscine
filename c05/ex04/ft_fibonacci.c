/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 20:46:44 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/22 16:52:59 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
	{
		if (index == 0)
			return (0);
		if (index == 1)
			return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
