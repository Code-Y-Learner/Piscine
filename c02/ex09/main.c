/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:46:42 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/16 04:35:58 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);

#include <stdio.h>
#include <string.h>


int main(void)
{
    char str[] = "salut, coMmEnt tU vas ? 42MOts \
	quarante-deux; cinquante+Et+un";
    char str1[] = "hello 42STUdeNts, i'M ba-tman.";
    char str2[] = "hi, i'm r+i+d+d+l+e+r. N+ow/i'1l \
	give -you9a 00sama11 r1dd1e-h-a-ha--ha- ";
    char str3[] = "";


	printf("\n");
    printf("before: %s\n", str);
    printf("after : %s\n", ft_strcapitalize(str));
    printf("expect: Salut, Comment Tu Vas ? 42mots  Quarante-Deux; \
Cinquante+Et+Un\n\n");
    printf("before: %s\n", str1);
    printf("after : %s\n", ft_strcapitalize(str1));
    printf("expect: Hello 42students, I'M Ba-Tman.\n\n");
    printf("before: %s\n", str2);
    printf("after : %s\n", ft_strcapitalize(str2));
    printf("expect: Hi, I'M R+I+D+D+L+E+R. N+Ow/I'1l	Give -You9a\
 00sama11 R1dd1e-H-A-Ha--Ha- \n\n");

    printf("before: \"%s\"\n", str3);
    printf("after : \"%s\"\n", ft_strcapitalize(str3));

	printf("\n");
    return (0);
}
