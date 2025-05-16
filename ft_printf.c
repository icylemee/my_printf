/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:06:21 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/15 15:32:45 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libft.h"

static	void	ft_checkfill(char c, va_list *args, int *total)
{
	if (c == 'd' || c == 'i')
		*total += ft_putnbr_fd(va_arg(*args, int));
	else if (c == '%')
		*total += ft_putchar_fd('%');
	else if (c == 's')
		*total += ft_putstr_fd(va_arg(*args, char *));
	else if (c == 'c')
		*total += ft_putchar_fd((char)va_arg(*args, int));
	else if (c == 'u')
		*total += ft_putnbr_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x' || c == 'X')
	{
		if (c == 'x')
			*total += ft_putstr_fd(ft_conv_hexa(va_arg(*args, unsigned int), "0123456789abcdef"));
		else if (c == 'X')
			*total += ft_putstr_fd(ft_majuscules(ft_conv_hexa(va_arg(*args, unsigned int), "0123456789abcdef")));
	}
}

int	ft_printf(const char *format, ...)
{
	int				i;
	int				total;
	va_list			args;

	i = 0;
	total = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i])
				ft_checkfill(format[i], &args, &total);
		}
		else if (format[i] != '%')
			total += ft_putchar_fd(format[i], 1);
		i++;
	}
	va_end(args);
	return (total);
}

int main(void)
{
	int len = ft_printf("Salut, j'ai %d ans, mon initiale est %c, j'ai %u euros, je suis %s%s%%, je test hexa : %x, et en maj %X", 18, 'M', 429496729, "Matthieu", "LEMEE", 123354, 123354);
	ft_printf("\nLONGUEUR : %d\n", len);
	printf("\n\n");
	printf("\nLONGUEUR : %d\n",printf("Salut, j'ai %d ans, mon initiale est %c, j'ai %u euros, je suis %s%s%%, je test hexa : %x, et en maj %X", 18, 'M', 429496729, "Matthieu", "LEMEE", 123354, 123354));
}


/*int	ft_printf(const char *format, ...)
{
	int				i;
	va_list			args;
	int				val;
	char			*string;
	char			c;
	unsigned int	num;

	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				//val = va_arg(args, int);
				ft_putnbr_fd(va_arg(args, int), 1);
			}
			else if (format[i] == '%')
				ft_putchar_fd('%', 1);
			else if (format[i] == 's')
			{
				string = va_arg(args, char *);
				ft_putstr_fd(string, 1);
			}
			else if (format[i] == 'c')
			{
				c = va_arg(args, int);
				ft_putchar_fd((char)c, 1);
			}
			else if (format[i] == 'u')
			{
				num = va_arg(args, unsigned int);
				ft_putnbr_unsigned(num);
			}
			else if (format[i] == 'x' || format[i] == 'X')
			{
				num = va_arg(args, unsigned int);
				if (format[i] == 'x')
					ft_putstr_fd(ft_conv_hexa(num, "0123456789abcdef"), 1);
						// fonction qui va return une chaine de carac en minuscul
				else if (format[i] == 'X')
					ft_putstr_fd(ft_majuscules(ft_conv_hexa(num, "0123456789abcdef")), 1);
						// ft_majuscules prend la string retournée par ft_conv et transforme chaque carac en maj puis retourne la string.
			}
		}
		else if (format[i] != '%')
			ft_putchar_fd(format[i], 1);
		i++;
	}
	return (0);
}*/