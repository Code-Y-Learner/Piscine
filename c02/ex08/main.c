/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:43:48 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:34:34 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[] = "abcdeFGHIJKlmnopqrs";
    char str2[] = "A;B.C'D,E[F]G-H=I1J5K";

	printf("\n");
    printf("befor : %s\n", str);
    printf("after : %s\n\n", ft_strlowcase(str));
    printf("befor : %s\n", str1);
    printf("after : %s\n\n", ft_strlowcase(str1));
    printf("befor : %s\n", str2);
    printf("after : %s\n\n", ft_strlowcase(str2));
	printf("\n");
    return (0);
}
