/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tondelierjonathan <tondelierjonathan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:56:21 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:46:38 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";
    char str1[] = {9, 10, 11, 12, 13, 32, 80,\
	 114, 105, 110, 116, 128, 130, 234, '\0'};
    char str2[] = "What \n is \t the \f non_printable\e  ";

	printf("\n");
    printf("\ninput :       Coucou\\ntu vas bien ?\n");
    printf("your result : ");
        fflush(NULL);

    ft_putstr_non_printable(str);
    printf("\nexpect :      Coucou\\0atu vas bien ?\n");

    printf("\n\n");
    printf("input : tab={9, 10, 11, 12, 13, 32, 80,\
	 114, 105, 110, 116, 128, 130, 234}\n");
    printf("your result : ");
    fflush(NULL);
    ft_putstr_non_printable(str1);
    printf("\nexpect :      \\09\\0a\\0b\\0c\\0d\
	 Print\\80\\82\\ea\n");

    printf("\n\n");
    printf("input :       What \\n is \\t the \\f\
	 non_printable\\e  \n");
    printf("your result : ");
    fflush(NULL);

    ft_putstr_non_printable(str2);
    printf("\nexpect :      What \\0a is \\09 the\
	 \\0c non_printable\\1b \n");
    printf("\n");
    return (0);
}
