/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:16:53 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/19 18:36:37 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// just for the data type of pointer p = va_arg(args, unsigned long) or 
// (unsigned long)va_arg(args, void *);

static	void	ft_printf_len_exec(char c, va_list *args, int *len, int *i)
{
	if (c == 'c')
		ft_putchar_c_len(va_arg(*args, int), len);
	else if (c == 's')
		ft_putstr_s(va_arg(*args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr_d_i(va_arg(*args, int), len);
	else if (c == 'u')
		ft_putnbr_unsigned_u(va_arg(*args, unsigned int), len);
	else if (c == 'p')
		ft_putptr_p(va_arg(*args, unsigned long), len);
	else if (c == 'x')
		ft_puthex_xx(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		ft_puthex_xx(va_arg(*args, unsigned int), len, 'X');
	else if (c == '%')
		ft_putchar_c_len('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printf_len_exec(str[++i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_c_len(str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}

/*

// THIS IS A MAIN FILE I COULD USE TO TEST THE PROGRAM

#include "ft_printf.h"

#include <stdio.h>
#include <limits.h>

int main(void)
{
	void *ptr;

	printf("%p\n", ptr);
	ft_printf("%p\n\n", ptr);

    printf("%u\n", UINT_MAX);
    ft_printf("%u\n\n", UINT_MAX);

    printf("%x\n", 12565);
    ft_printf("%x\n\n", 12565);
	
    printf("%x\n", 12565);
    ft_printf("%x\n\n", 12565);

	printf("ciao %s oggi e il n %d\n", "Marco", 16);
	ft_printf("ciao %s oggi e il n %d\n\n", "Marco", 16);

	printf("originale  %p %p \n", 0, 0);
	ft_printf("mio  %p %p \n\n", 0, 0);
} */

/* 	

// SOME PARTICLUAR CASES...TOO DIFFICULT TO HANDLE 
// so I didnt do them

	// Those are the cases with the flags, quite complicated thats why I dont
	// use them 

	printf( "%12d\n", 452 );
	printf( "%9d\n", 452 );
	printf( "%+9d\n", 452 );
	printf( "%+d\n", 452 );
	printf( "%+09d\n", 452 );
    printf( "%09d\n", 452 );
    printf( "% 9d\n", 452 );
	printf("Prova %0d, zero\n", 12);
	printf("Prova %.21d, precision\n", 23);
	printf("Prova%        d,\n", 23); */
