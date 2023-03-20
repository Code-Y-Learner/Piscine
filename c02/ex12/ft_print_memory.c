/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:34:42 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/20 21:55:40 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size);
void	ft_strtran(unsigned char *str, unsigned int size, int tf);
void	ft_printable(char c, int tf);
void	ft_transform(unsigned long long add, int size);

void	ft_transform(unsigned long long add, int size)
{
	int		i;
	char	arr[17];

	if (size == 0)
		return ;
	i = size - 1;
	while (i >= 0)
	{
		if (add % 16 <= 9)
			arr[i] = add % 16 + 48;
		else
			arr[i] = add % 16 + 87;
		add /= 16;
		i--;
	}
	write(1, arr, size);
	if (size == 16 && i == -1)
		write(1, ":", 1);
}

void	ft_printable(char c, int tf)
{
	if (tf == 1)
	{
		if (c >= 32 && c <= 126)
			write(1, &c, 1);
		else
			write(1, ".", 1);
	}
	else
		ft_transform((unsigned char) c, 2);
}

void	ft_strtran(unsigned char *str, unsigned int size, int tf)
{
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0 && tf == 0)
			write(1, " ", 1);
		if (tf == 0 && i < size)
			ft_printable(str[i], 0);
		else if (tf == 0 && i >= size)
			write(1, "  ", 2);
		else if (tf == 1 && i < size)
			ft_printable(str[i], 1);
		i++;
	}
	if (tf == 0)
	{
		write(1, " ", 1);
		ft_strtran(str, size, 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	while (size > 0)
	{
		if (size < 16)
		{
			ft_transform((long long) addr, 16);
			ft_strtran(addr, size, 0);
			write(1, "\n", 1);
			size = 0;
		}
		else
		{
			ft_transform((long long) addr, 16);
			ft_strtran(addr, 16, 0);
			addr += 16;
			size -= 16;
			write(1, "\n", 1);
		}
	}
	return (addr);
}
