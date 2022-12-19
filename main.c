/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:16:03 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/19 13:23:18 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
/* 	void *ptr = 0;

    printf("%p\n", ptr);
    printf("%u\n", UINT_MAX);
    printf("%lu\n", ULONG_MAX);
    printf("%lx\n", ULONG_MAX);
    printf("%x\n", UINT_MAX);

	printf("ciao %s oggi e il n %d\n", "Marco", 16);
	ft_printf("ciao %s oggi e il n %d\n", "Marco", 16); */
	printf("originale  %p %p \n", 0, 0);
	ft_printf("mio  %p %p \n", 0, 0);
/* 	printf( "%12d\n", 452 );
	printf( "%9d\n", 452 );
	printf( "%+9d\n", 452 );
	printf( "%+d\n", 452 );
	printf( "%+09d\n", 452 );
    printf( "%09d\n", 452 );
    printf( "% 9d\n", 452 );
	printf("Prova %0d, zero\n", 12);
	printf("Prova %.21d, precision\n", 23);
	printf("Prova%        d, it is a space, just adds a space before positive numbers\n", 23); */
}