/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 23:46:16 by hbouchel          #+#    #+#             */
/*   Updated: 2023/11/14 23:52:45 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <limits.h>
# include <stdarg.h>
# include <stdbool.h>
# include <unistd.h>

int	ft_nbrbase(unsigned long nbr, char *base, bool ptr);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr_un(unsigned int n);
int	ft_printf(const char *format, ...);
int	ft_format(va_list args, const char format);
int	ft_putnbr(int n);

#endif