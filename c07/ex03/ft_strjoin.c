/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 23:18:55 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/28 09:23:07 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		words(char **strs, int size);

int	words(char **strs, int size)
{
	int	i;
	int	j;
	int	len;

	if (size <= 0)
		return (0);
	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
		{
			j++;
			len++;
		}
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		arr[5];
	char	*str_con;

	arr[0] = 0;
	arr[1] = 0;
	arr[3] = 0;
	while (sep[arr[3]])
		arr[3]++;
	if (size <= 0)
		str_con = (char *)malloc(1);
	else
		str_con = (char *)malloc(sizeof(char *)
				* (words(strs, size) + arr[3] * (size - 1)));
	while (arr[1] < size && strs[arr[1]])
	{
		arr[2] = 0;
		while (strs[arr[1]][arr[2]] != '\0' && arr[1] < size)
			str_con[arr[0]++] = strs[arr[1]][arr[2]++];
		arr[3] = 0;
		while (sep[arr[3]] != '\0' && arr[1] < size - 1)
			str_con[arr[0]++] = sep[arr[3]++];
		arr[1]++;
	}
	str_con[arr[0]] = '\0';
	return (str_con);
}
// 2 index2 / 0 str_coni / 3 sep_len / 1 word_inedex
