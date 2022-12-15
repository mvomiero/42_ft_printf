/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:16:18 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/15 17:27:16 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_c_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr_s(char *args, int *len)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(null)", 6);
		*len += 6;
	}
	else
	{
		ft_putchar_c_len(args[i], len);
		i++;
	}
}