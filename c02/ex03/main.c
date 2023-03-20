/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:58:37 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:31:43 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include<string.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
    char str[] = "9816345089608716324";
    char str1[] = "";
    char str2[] = "1078623423l1465981253489";
    char str3[] = "12308764-96872378456";
    char str4[] = "-129385304345";

	printf("\n\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_numeric(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_numeric(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_numeric(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str3, ft_str_is_numeric(str3));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str4, ft_str_is_numeric(str4));
	printf("\n\n");
    return (0);
}
