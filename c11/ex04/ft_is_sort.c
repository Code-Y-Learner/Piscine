/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:02:25 by seungjyu          #+#    #+#             */
/*   Updated: 2023/03/02 08:11:51 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	j;
	int	answer;

	i = 0;
	j = 0;
	answer = 0;
	if (length == 0 || length == 1)
		return (1);
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			j++;
		else if (f(tab[i], tab[i + 1]) < 0)
			j--;
		else
			answer++;
		i++;
	}
	if (j == (length - 1 - answer) || j == (1 - length + answer))
		return (1);
	return (0);
}
