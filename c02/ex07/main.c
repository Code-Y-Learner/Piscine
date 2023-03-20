/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:25:12 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:33:38 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    char str1[] = "ABCDefghijkLMNOP";
    char str2[] = "a;b.c'd,e[f]g-h=i1j5k";

	printf("\n");
    printf("befor : %s\n", str);
    printf("after : %s\n\n", ft_strupcase(str));
    printf("befor : %s\n", str1);
    printf("after : %s\n\n", ft_strupcase(str1));
    printf("befor : %s\n", str2);
    printf("after : %s\n\n", ft_strupcase(str2));
	printf("\n");
    return (0);
}
