/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C02testcase                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tondelierjonathan <tondelierjonathan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:10:48 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:26:21 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
    char str[] = "123456789";
    char dest[] = "abcdefghijklmnopqrstuvwxyz";
    char str1[] = "12";
    char dest1[] = "abcdefg";
    char str2[] = "";
    char dest2[] = "abcde";
	char str3[] = "You are my teacher";
	char dest3[] = "subject and subject and subject";

	printf("\n\n");
    printf("str : %s\ndest : %s\n", str, dest);
    printf("your function : %s\ncom function : %s\n", \
	ft_strcpy(dest, str), strcpy(dest, str));
    printf("\n\n");

    printf("str : %s\ndest : %s\n", str1, dest1);
    printf("your function : %s\ncom function : %s\n",\
	 ft_strcpy(dest1, str1), strcpy(dest1, str1));
    printf("\n\n");
    
	printf("str : %s\ndest : %s\n", str2, dest2);
    printf("your function : %s\ncom function : %s\n",\
	 ft_strcpy(dest2, str2), strcpy(dest2, str2));
    printf("\n\n");

    printf("str : %s\ndest : %s\n", str3, dest3);
    printf("your function : %s\ncom function : %s\n",\
	 ft_strcpy(dest3, str3), strcpy(dest3, str3));
    printf("\n\n");
    return (0);
}
