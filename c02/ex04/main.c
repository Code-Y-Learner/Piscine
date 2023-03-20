/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:04:25 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:32:18 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include<string.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
    char str[] = "aligywefbxlygsdcjhg";
    char str1[] = "";
    char str2[] = "aliugwefdlIsvluiscedf";
    char str3[] = "aef;iugaew:liaygefwef";
    char str4[] = "awefaewfuoiIawelfgliygawef";

	printf("\n\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_lowercase(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_lowercase(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_lowercase(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str3, ft_str_is_lowercase(str3));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str4, ft_str_is_lowercase(str4));
	printf("\n\n");

    return (0);
}
