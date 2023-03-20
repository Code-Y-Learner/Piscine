/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:24:54 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:33:12 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include<string.h>

int	ft_str_is_printable(char *str);

int main(void)
{
    char str[] = "awe][f;./,dsvlg1=-`73rzef.,";
    char str1[] = "";
    char str2[] = "auhwefli\ngzewubfew";
    char str3[] = "\tAEFULYZPQOWEFVWE]FLYGDS";
    char str4[] = "HFWDUSQMSDNwWEFQDYGFE\f";

	printf("\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_printable(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_printable(str1));
    printf("str : auhwefli \\n gzewubfew\nyour function :\
	 %d\nexpect : 0\n\n", ft_str_is_printable(str2));
    printf("str : \\t AEFULYZPQOWEFVWE]FLYGDS\nyour function :\
	 %d\nexpect : 0\n\n", ft_str_is_printable(str3));
    printf("str : HFWDUSQMSDNwWEFQDYGFE\\f\nyour function :\
	 %d\nexpect : 0\n", ft_str_is_printable(str4));
	printf("\n");
    return (0);
}
