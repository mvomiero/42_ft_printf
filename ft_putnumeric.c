/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumeric.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 17:58:02 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/19 17:16:29 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_d_i(int nb, int *len)
{
	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_c_len('-', len);
		ft_putnbr_d_i(-nb, len);
	}
	else
	{
		if (nb > 9)
			ft_putnbr_d_i(nb / 10, len);
		ft_putchar_c_len(nb % 10 + '0', len);
	}
}

void	ft_putnbr_unsigned_u(unsigned int nb, int *len)
{
	if (nb > 9)
		ft_putnbr_unsigned_u(nb / 10, len);
	ft_putchar_c_len(nb % 10 + '0', len);
}

// you first go to the end, then you decrese the i. If not th function
// was too long

void	ft_putptr_p(unsigned long ptr, int *len)
{
	char	str[25];
	int		i;
	char	*base_char;

	i = 0;
	base_char = "0123456789abcdef";
	if (ptr == 0)
	{
		ft_putstr_s("(nil)", len);
		return ;
	}
	write(1, "0x", 2);
	*len += 2;
	while (ptr)
	{
		str[i] = base_char[ptr % 16];
		ptr /= 16;
		i++;
	}
	while (i--)
		ft_putchar_c_len(str[i], len);
}

void	ft_puthex_xx(unsigned int hex, int *len, char format)
{
	char	str[25];
	int		i;
	char	*base_char;

	i = 0;
	if (format == 'x')
		base_char = "0123456789abcdef";
	else
		base_char = "0123456789ABCDEF";
	if (hex == 0)
	{
		ft_putchar_c_len('0', len);
		return ;
	}
	while (hex)
	{
		str[i] = base_char[hex % 16];
		hex /= 16;
		i++;
	}
	while (i--)
		ft_putchar_c_len(str[i], len);
}
