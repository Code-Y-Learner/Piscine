/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 04:29:10 by seungjyu          #+#    #+#             */
/*   Updated: 2023/03/02 11:22:58 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_string_tab(char **tab);
int		ft_strcmp(char *s1, char *s2);
int		word_cnt(char **tab);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}

int	word_cnt(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;
	int		words;
	char	*tmp;

	words = word_cnt(tab);
	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (words - j)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}
