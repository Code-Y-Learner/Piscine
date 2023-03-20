/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:13:37 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:31:13 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include<string.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
    char str[] = "aBchWEOPghsdfEbkbjsoiE";
    char str1[] = "";
    char str2[] = "aARegAE1feSDQdvH";
    char str3[] = ";][;1=-`10976=234=-";

	printf("\n\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_alpha(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_alpha(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_alpha(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str3, ft_str_is_alpha(str3));
	printf("\n\n");
    return (0);
}
