/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:16:18 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/19 17:04:11 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_c_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void	ft_putstr_s(char *str, int *len)
{
	size_t	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (str[i])
	{
		ft_putchar_c_len(str[i], len);
		i++;
	}
}
