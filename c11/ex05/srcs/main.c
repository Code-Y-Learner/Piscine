/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:32:40 by seungjyu          #+#    #+#             */
/*   Updated: 2023/03/02 04:25:53 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		check(char *s1, int nb);
void	cal(int a, int b, char *str, int (**f)(int, int));
int		main(int argc, char *argv[]);
int		plus(int a, int b);
int		minus(int a, int b);
int		mul(int a, int b);
int		division(int a, int b);
int		mok(int a, int b);
int		ft_atoi(char *str);
int		ft_nbr(char c, long n);
void	ft_putnbr(int nb);

int	check(char *s1, int nb)
{
	if (s1[1] != '\0')
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (s1[0] == '/')
	{
		if (nb == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return (0);
		}
	}
	else if (s1[0] == '%')
	{
		if (nb == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return (0);
		}
	}
	return (1);
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
	{
		num += 48;
		write(1, &num, 1);
	}
	else
	{
		ft_putnbr((int)(num / 10));
		ft_putnbr((int)(num % 10));
	}
}

void	cal(int a, int b, char *str, int (**f)(int, int))
{
	int	answer;

	if (str[0] == '+')
		answer = f[0](a, b);
	else if (str[0] == '-')
		answer = f[1](a, b);
	else if (str[0] == '*')
		answer = f[2](a, b);
	else if (str[0] == '/')
		answer = f[3](a, b);
	else if (str[0] == '%')
		answer = f[4](a, b);
	else
	{
		write(1, "0", 1);
		return ;
	}
	ft_putnbr(answer);
}

int	main(int argc, char *argv[])
{
	int	(*f[5])(int, int);
	int	a;
	int	b;

	f[0] = &plus;
	f[1] = &minus;
	f[2] = &mul;
	f[3] = &division;
	f[4] = &mok;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (!check(argv[2], b))
		return (0);
	cal(a, b, argv[2], f);
	write(1, "\n", 1);
	return (0);
}
