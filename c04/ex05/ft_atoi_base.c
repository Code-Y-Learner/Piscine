/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 18:07:36 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/23 11:20:48 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_basein(char *str, unsigned int i, char *base, long nb);
int	ft_atoi_base(char *str, char *base);
int	ft_atoi(char *str, char *base);
int	ft_basecheck(char *base);

int	ft_basecheck(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

int	ft_basein(char *str, unsigned int i, char *base, long nb)
{
	int	j;
	int	len;

	len = 0;
	while (base[len])
		len++;
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

int	ft_atoi(char *str, char *base)
{
	unsigned int	i;
	long			pm;
	long			nb;

	i = 0;
	pm = 1;
	nb = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pm *= -1;
		i++;
	}
	nb = ft_basein(str, i, base, nb);
	return (pm * nb);
}

int	ft_atoi_base(char *str, char *base)
{
	int		len;
	long	nbr;

	len = ft_basecheck(base);
	if (!len)
		return (0);
	nbr = ft_atoi(str, base);
	return ((int) nbr);
}
