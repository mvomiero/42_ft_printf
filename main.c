/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 12:16:03 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/16 13:13:53 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
	void *ptr = 0;

    printf("%p\n", ptr);
    printf("%u\n", UINT_MAX);
    printf("%lu\n", ULONG_MAX);
    printf("%lx\n", ULONG_MAX);
    printf("%x\n", UINT_MAX);

	printf("ciao %s oggi e il n %d\n", "Marco", 16);
	ft_printf("ciao %s oggi e il n %d\n", "Marco", 16);
}