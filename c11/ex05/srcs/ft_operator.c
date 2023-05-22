/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 01:58:47 by seungjyu          #+#    #+#             */
/*   Updated: 2023/03/02 03:47:26 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	plus(int a, int b);
int	minus(int a, int b);
int	mul(int a, int b);
int	division(int a, int b);
int	mok(int a, int b);

int	plus(int a, int b)
{
	return (a + b);
}

int	minus(int a, int b)
{
	return (a - b);
}

int	mul(int a, int b)
{
	return (a * b);
}

int	division(int a, int b)
{
	return (a / b);
}

int	mok(int a, int b)
{
	return (a % b);
}
