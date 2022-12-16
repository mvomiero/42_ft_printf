/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:16:53 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/16 13:41:24 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//p = va_arg(args, unsigned long)# or 
//                               #(unsigned long)va_arg(args, void *);

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
		ft_puthex_xX(va_arg(*args, unsigned int), len, 'x');
	else if (c == 'X')
		ft_puthex_xX(va_arg(*args, unsigned int), len, 'X');
	else if (c == '%')
		ft_putchar_c_len('%', len);
	else
		(*i)--;


}

int ft_printf(const char *str, ...)
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
			i++;
			ft_printf_len_exec(str[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_c_len((char)str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}