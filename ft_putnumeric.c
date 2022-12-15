/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:58:02 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/15 18:21:26 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_d_i(int nb, int *len)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 1);
		*len += 11;
	}
	else if (nb < 0)
	{
		ft_putchar_c_len('-', len);
		ft_putnbr_d_i(-nb, len);
	}
	else
	{
		if (nb > 9)
			ft_putnbr_d_i(nb / 10, len);
		ft_putchar_c_len(nb % 10 + '0', len)
	}
}

void	ft_putnbr_unsigned_u(unsigned int nb, int *len)
{
	if (nb > 9)
		ft_putnbr_unsigned_u(nb / 10, len);
	ft_putchar_c_len(nb % 10 + '0', len);
}