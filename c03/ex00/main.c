/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:38:04 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/16 03:07:31 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strcmp(char *s1, char *s2);
#include <stdio.h>
#include <string.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 1 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 1 ? printf( GREEN "\"%d\"\n" RESET, ret) : printf( RED "\"%d\"\n" RESET, ret);
int main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	int res1 = ft_strcmp(s1, s2);
	int res2 = strcmp(s1, s2);

	printf( YELLOW "\nCase 1 " RESET);
	PASS(res1 == res2)
	printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n\n", s2);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");


	char s3[] = "Hallo";
	char s4[] = "Hello";
	res1 = ft_strcmp(s3, s4);
    res2 = strcmp(s3, s4);
 
    printf( YELLOW "\nCase 2 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s3);
	printf("s2: %s\n\n", s4);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");


	char s5[] = "Hello";
	char s6[] = "HelaloA";
	res1 = ft_strcmp(s5, s6);
    res2 = strcmp(s5, s6);

    printf(YELLOW "\nCase 3 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s5);
	printf("s2: %s\n\n", s6);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");


	char s7[] = "Hello";
	char s8[] = "HelloA";
	res1 = ft_strcmp(s7, s8);
    res2 = strcmp(s7, s8);

    printf(YELLOW "\nCase 4 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s7);
	printf("s2: %s\n\n", s8);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");

	char s9[] = "Hello";
	char s10[] = "";
	res1 = ft_strcmp(s9, s10);
    res2 = strcmp(s9, s10);

    printf(YELLOW "\nCase 5 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s9: %s\n", s9);
	printf("10: %s\n\n", s10);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", strcmp(s9, s10));
	printf("-------------------\n\n");
}
