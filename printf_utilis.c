/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utilis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbouchel <hbouchel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:29:51 by hbouchel          #+#    #+#             */
/*   Updated: 2023/11/20 23:12:59 by hbouchel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = -1;
	len = 0;
	if (!str)
		return (ft_putstr("(null)"));
	while (str[++i])
		len += ft_putchar(str[i]);
	return (len);
}

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == INT_MIN)
		len += ft_putstr("-2147483648");
	else if (n == INT_MAX)
		len += ft_putstr("2147483647");
	else
	{
		if (n < 0)
		{
			len += ft_putchar('-');
			n = -n;
		}
		if (n > 9)
			len += ft_putnbr(n / 10);
		len += ft_putchar((n % 10) + '0');
	}
	return (len);
}

int	ft_putnbr_un(unsigned int n)
{
	unsigned int	len;

	len = 0;
	if (n > 9)
		len += ft_putnbr_un(n / 10);
	len += ft_putchar((n % 10) + '0');
	return (len);
}
