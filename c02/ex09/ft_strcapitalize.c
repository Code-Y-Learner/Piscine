/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpaitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seungjyu <seungjyu@student.24seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 14:32:59 by seungjyu          #+#    #+#             */
/*   Updated: 2023/02/16 01:14:03 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str);

int		ft_j(char *c, int j);

int	ft_j(char *c, int j)
{
	if (*c >= 'A' && *c <= 'Z')
	{
		if (j == 0)
			*c += 32;
		else
			j = 0;
	}
	else if (*c >= 'a' && *c <= 'z')
	{
		if (j == 1)
		{
			*c -= 32;
			j = 0;
		}
	}
	else if (*c >= 48 && *c <= 57)
		j = 0;
	return (j);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			if (!(str[i] >= '0' && str[i] <= '9'))
				j = 1;
		}
		j = ft_j(&str[i], j);
		i++;
	}
	return (str);
}
