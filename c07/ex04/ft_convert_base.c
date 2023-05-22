/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conver_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 10:02:35 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/28 03:29:44 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);
int		base_check(char *s1);
int		ft_atoi(char *str, char *base);
int		ft_basein(char *str, int i, char *base, int len);
void	ft_itoa(char *str, char *base, long nb, int i);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len_f;
	int		len_t;
	int		nb;
	char	*str;

	len_f = base_check(base_from);
	len_t = base_check(base_to);
	if (len_t == 0 || len_f == 0)
		return (0);
	nb = ft_atoi(nbr, base_from);
	len_f = 0;
	if (nb <= 0)
		len_f++;
	while (nb != 0)
	{
		nb /= len_t;
		len_f++;
	}
	str = (char *)malloc(sizeof(char) * len_f + 1);
	nb = ft_atoi(nbr, base_from);
	ft_itoa(str, base_to, nb, len_f);
	return (str);
}

int	base_check(char *s1)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[0] == '+' || s1[0] == '-')
			return (0);
		j = i + 1;
		while (s1[j] != '\0')
		{
			if (s1[i] == s1[j] || s1[j] == '+' || s1[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_atoi(char *str, char *base)
{
	int		i;
	int		pm;
	long	nb;
	int		len;

	i = 0;
	pm = 1;
	len = 0;
	while (base[len] != '\0')
		len++;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pm *= -1;
		i++;
	}
	nb = ft_basein(str, i, base, len);
	return (pm * nb);
}

int	ft_basein(char *str, int i, char *base, int len)
{
	int	j;
	int	nb;

	nb = 0;
	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] == base[j])
			{
				nb = len * nb;
				nb += j;
				break ;
			}
			j++;
		}
		if (j == len)
			return (nb);
		i++;
	}
	return (nb);
}

void	ft_itoa(char *str, char *base, long nb, int i)
{
	int	j;

	j = 0;
	while (base[j] != '\0')
		j++;
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		str[0] = base[0];
	str[i] = '\0';
	while (--i > 0)
	{
		str[i] = base[nb % j];
		nb /= j;
	}
	if (nb != 0)
		str[i] = base[nb % j];
}
