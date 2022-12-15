/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:16:53 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/15 17:37:19 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	ft_printf_len_exec(char c, va_list *args, int *len, int *i)
{
	if (c == 'c')
		ft_putchar_c_len(va_arg(*args, int), len);
	else if (c == 's')
		ft_putstr_s(va_arg(*args, char *), len);


}

int ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, string);
	while (str[i])
	{
		if (str[i] == '%')
		{
			ft_printf_len_exec(str[++i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_putchar_len((char)str[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}