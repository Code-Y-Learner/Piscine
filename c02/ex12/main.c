/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tondelierjonathan <tondelierjonathan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:49:55 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/20 22:47:36 by seungjyu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void *ft_print_memory(void *addr, unsigned int size);

#include <stdio.h>
int main()
{
	char test2[] = "hellow world ! dfjl;ajfl;dfasl;ladjl;dfal;ads";
   //char test[] = { 0xe6, 0xa2, 0xc8, 0xc7, 0x16, 0xec, 0xc7,0xab, 0x0c, 0xc3, 0x9a, 0x9b, 0x59, 0x9a, 0xbf,0xcb,0xf2, 0xa4, 0xce, 0x8f, 0x94, 0x67, 0x19, 0xa9, 0x57,0x79, 0x32, 0x81, 0x8f };
    ft_print_memory(&test2, 10000);
}
