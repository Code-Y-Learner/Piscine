/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 21:48:29 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/28 00:17:09 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_ten_queens_puzzle(void);
int		chess(int *map, int i, int *answer);
void	print_map(int *map, int *answer);
int		check(int *map, int i, int qu);

int	chess(int *map, int i, int *answer)
{
	int	qu;

	if (i == 10)
	{
		print_map(map, answer);
		return (1);
	}
	qu = -1;
	while (++qu < 10)
	{
		if (check(map, i, qu) == 0)
			continue ;
		map[i] = qu;
		chess(map, i + 1, answer);
	}
	return (0);
}

void	print_map(int *map, int *answer)
{
	char	tmp;
	int		i;

	i = -1;
	while (++i < 10)
	{
		tmp = map[i] + '0';
		write(1, &tmp, 1);
	}
	write(1, "\n", 1);
	*answer += 1;
}

int	check(int *map, int index, int qu)
{
	int	i;

	i = -1;
	while (++i < index)
	{
		if (map[i] == qu)
			return (0);
		else if (map[i] - qu == i - index
			|| map[i] - qu == index - i)
			return (0);
	}
	return (1);
}

int	ft_ten_queens_puzzle(void)
{
	int	map[10];
	int	answer;
	int	i;

	i = 0;
	answer = 0;
	chess(map, i, &answer);
	return (answer);
}
