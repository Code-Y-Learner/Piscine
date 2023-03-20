/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 17:04:26 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/20 21:55:26 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_str_is_printable(char c);
void	ft_transform(unsigned char c);
void	ft_putstr_non_printable(char *str);

int	ft_str_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_transform(unsigned char c)
{
	int	a1;
	int	a2;

	a1 = (c / 16);
	a2 = c % 16;
	if (a1 > 9)
		a1 += 87;
	else
		a1 += 48;
	if (a2 > 9)
		a2 += 87;
	else
		a2 += 48;
	write(1, &a1, 1);
	write(1, &a2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_printable(str[i]))
			write(1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			ft_transform((unsigned char) str[i]);
		}
		i++;
	}
}
