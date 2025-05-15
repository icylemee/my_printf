/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlemee <mlemee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 15:17:27 by mlemee            #+#    #+#             */
/*   Updated: 2025/05/15 15:36:17 by mlemee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_putnbr_fd(int n, int fd)
{
	int	div;
	int	count;

	div = 1;
	count = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n *= -1;
		count += ft_putchar_fd('-', fd);
	}
	while (n / div > 9)
		div *= 10;
	while (div > 0)
	{
		count += ft_putchar_fd(((n / div) + '0'), fd);
		n %= div;
		div /= 10;
	}
	return (count);
}
/*int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putnbr_fd(ft_atoi(argv[1]), ft_atoi(argv[2]));
	}
}*/