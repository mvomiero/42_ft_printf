/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvomiero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:17:22 by mvomiero          #+#    #+#             */
/*   Updated: 2022/12/15 18:22:35 by mvomiero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

int ft_printf(const char *str, ...);
void	ft_putchar_c_len(char c, int *len);
void	ft_putstr_s(char *args, int *len);
void	ft_putnbr_d_i(int nb, int *len);
void	ft_putnbr_unsigned_u(unsigned int nb, int *len);








#endif