/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 12:38:04 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/26 22:59:30 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		check(char c, char *sep);
char	**ft_split(char *str, char *charset);
int		word_count(char *str, char *charset);
char	*fs(char *str, char *sep, char *answer, int *a);

int	check(char c, char *sep)
{
	int	i;

	i = 0;
	if (!sep)
		return (0);
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

char	*fs(char *str, char *sep, char *answer, int *a)
{
	int	i;

	i = 0;
	answer = (char *)malloc(sizeof(char) * (a[2] + 1));
	while (str[i] && !check(str[i], sep))
	{
		answer[i] = str[i];
		i++;
	}
	answer[i] = '\0';
	return (answer);
}

int	wc(char *str, char *charset)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] && check(str[i], charset))
			i++;
		if (str[i] && !check(str[i], charset))
		{
			j++;
			while (str[i] && !check(str[i], charset))
				i++;
		}
	}
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		a[3];
	char	**answer;

	a[0] = 0;
	a[1] = 0;
	answer = (char **)malloc(sizeof(char *) * (wc(str, charset) + 1));
	while (str[a[0]] != '\0')
	{
		while (str[a[0]] && check(str[a[0]], charset))
			a[0]++;
		if (str[a[0]] && !check(str[a[0]], charset))
		{
			a[1]++;
			a[2] = 0;
			while (str[a[0]] && !check(str[a[0]], charset))
			{
				a[0]++;
				a[2]++;
			}
			answer[a[1] -1] = fs(&str[a[0] - a[2]],
					charset, answer[a[1] - 1], a);
		}
	}
	answer[a[1]] = 0;
	return (answer);
}
// 0 index, 1 words, 2word_len
